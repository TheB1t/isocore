#version 430 core

layout (location = 0) out vec3 gPosition;
layout (location = 1) out vec3 gNormal;
layout (location = 2) out vec4 gAlbedoSpec;

in struct {
    vec3 position;
    vec3 normal;
    vec2 texCoord;
} VS_OUT;

uniform sampler2D tDiffuse;
uniform sampler2D tSpecular;

void main() {
    gPosition = VS_OUT.position;
    gNormal = normalize(VS_OUT.normal);
    gAlbedoSpec.rgb = texture(tDiffuse, VS_OUT.texCoord).rgb;
    gAlbedoSpec.a = texture(tSpecular, VS_OUT.texCoord).r;
}