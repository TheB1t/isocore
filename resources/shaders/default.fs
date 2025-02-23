#version 420 core

out vec4 FragColor;

in struct {
    vec3 position;
    vec3 normal;
    vec2 texCoord;
} VS_OUT;

uniform sampler2D tDiffuse;
uniform sampler2D tNormal;
uniform sampler2D tSpecular;

struct Material_t {
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;

    float metallic;
    float shininess;
};

layout(std140, binding = 1) uniform Material_b {
    Material_t material;
};

const vec3 lightPos = vec3(0.0, -1.0, 0.0);
uniform vec3 viewPos;

void main() {
    vec4 texColor = texture(tDiffuse, VS_OUT.texCoord);

    if(texColor.a < 0.1)
        discard;

    vec3 color = texColor.rgb;

    // color *= material.ambient;
    // color *= material.diffuse;

    // ambient
    vec3 ambient = 0.05 * color;
    // diffuse
    vec3 lightDir = normalize(lightPos - VS_OUT.position);
    vec3 normal = normalize(VS_OUT.normal);
    float diff = max(dot(lightDir, normal), 0.0);
    vec3 diffuse = diff * color;
    // specular
    vec3 viewDir = normalize(viewPos - VS_OUT.position);
    vec3 reflectDir = reflect(-lightDir, normal);
    float spec = 0.0;
    // if(blinn)
    // {
        vec3 halfwayDir = normalize(lightDir + viewDir);
        spec = pow(max(dot(normal, halfwayDir), 0.0), 32.0);
    // }
    // else
    // {
    //     vec3 reflectDir = reflect(-lightDir, normal);
    //     spec = pow(max(dot(viewDir, reflectDir), 0.0), 8.0);
    // }
    vec3 specular = vec3(0.3) * spec; // assuming bright white light color
    FragColor = vec4(ambient + diffuse + specular, 1.0);
    FragColor = vec4(color, 1.0);
}