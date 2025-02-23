#version 430 core

const float PI = 3.14159265359;

out vec4 FragColor;
in vec2 TexCoords;

uniform sampler2D gPosition;
uniform sampler2D gNormal;
uniform sampler2D gAlbedo;

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
    vec3 position = texture(gPosition, TexCoords).rgb;
    vec3 normal = texture(gNormal, TexCoords).rgb;
    vec3 diffuse = texture(gAlbedo, TexCoords).rgb;
    float specular = texture(gAlbedo, TexCoords).a;

    vec3 viewDir = normalize(viewPos - position);
    vec3 Lo = ambient * pDirect.ambient * diffuse;

    for (int i = 0; i < pLightsCount; i++) {
        float lightDistance = length(pLights[i].position - position);
        float attenuation = attenuation_func(lightDistance, pLights[i].radius);

        vec3 lightDir = normalize(pLights[i].position - position);

        Lo += compute_light(
            normal,
            lightDir,
            pLights[i].color,
            diffuse,
            viewDir
        ) * attenuation;
    }

    Lo += compute_light(
        normal,
        normalize(-pDirect.direction),
        pDirect.color,
        diffuse,
        viewDir
    );

    // FragColor = vec4(diffuse, 1.0);
    FragColor = vec4(Lo, 1.0);
}