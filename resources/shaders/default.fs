#version 430 core

const float PI = 3.14159265359;

out vec4 FragColor;

in struct {
    vec3 position;
    vec3 normal;
    vec2 texCoord;
} VS_OUT;

uniform sampler2D tDiffuse;
uniform sampler2D tNormal;
uniform sampler2D tSpecular;

layout(std140) uniform Material {
    vec3 ambient;
    float metallic;
    vec3 diffuse;
    float shininess;
    vec3 specular;
};

layout(std140) uniform DirectLight {
    vec3 direction;
    float pad0;
    vec3 color;
    float pad1;
    vec3 ambient;
    float pad2;
} pDirect;

struct PointLightStruct {
    vec3 position;
    float radius;
    vec3 color;
    float pad0;
};

readonly restrict layout(std140) buffer PointLights {
    PointLightStruct pLights[];
};
uniform int pLightsCount;

uniform vec3 viewPos;

float attenuation_func(float dist, float radius) {
    float ratio = clamp(dist / radius, 0.0, 1.0);
    return pow(1.0 - ratio * ratio, 2.0);
}

float calcBlinPhong(vec3 lightDir, vec3 normal, vec3 viewDir, bool blinn) {
    if(blinn) {
        float kEnergyConservation = (8.0 + shininess) / (8.0 * PI);
        vec3 halfwayDir = normalize(lightDir + viewDir);
        return kEnergyConservation * pow(max(dot(normal, halfwayDir), 0.0), shininess);
    }

    float kEnergyConservation = (2.0 + shininess) / (2.0 * PI);
    vec3 reflectDir = reflect(-lightDir, normal);
    return kEnergyConservation * pow(max(dot(viewDir, reflectDir), 0.0), shininess);
}

vec3 compute_light(vec3 normal, vec3 lightDir, vec3 lightColor, vec3 albedo, vec3 viewDir) {
    // Diffuse component
    float NdotL = max(dot(normal, lightDir), 0.0);
    vec3 diffuse = albedo * diffuse * NdotL;

    // Specular component (Blinn-Phong)
    float spec = calcBlinPhong(lightDir, normal, viewDir, true);
    vec3 specular = specular * spec * (metallic + 0.04);

    return (diffuse * (1.0 - metallic) + specular) * lightColor;
}


void main() {
    vec4 texColor = texture(tDiffuse, VS_OUT.texCoord);
    if(texColor.a < 0.1)
        discard;

    vec3 normal = normalize(VS_OUT.normal);
    vec3 viewDir = normalize(viewPos - VS_OUT.position);

    vec3 Lo = vec3(0.0f);

    for (int i = 0; i < pLightsCount; i++) {
        float lightDistance = length(pLights[i].position - VS_OUT.position);
        float attenuation = attenuation_func(lightDistance, pLights[i].radius);

        vec3 lightDir = normalize(pLights[i].position - VS_OUT.position);

        Lo += compute_light(
            normal,
            lightDir,
            pLights[i].color,
            texColor.rgb,
            viewDir
        ) * attenuation;
    }

    Lo += compute_light(
        normal,
        normalize(-pDirect.direction),
        pDirect.color,
        texColor.rgb,
        viewDir
    );

    Lo += ambient * pDirect.ambient * texColor.rgb;

    FragColor = vec4(texColor.rgb, 1.0);
}