#version 430 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
layout (location = 2) in vec2 aTexCoord;

uniform mat4 model;
uniform mat4 normalMatrix;
uniform mat4 view;
uniform mat4 projection;

out struct {
    vec3 position;
    vec3 normal;
    vec2 texCoord;
} VS_OUT;

void main() {
    vec4 pos = model * vec4(aPos, 1.0);

    gl_Position = projection * view * pos;

    VS_OUT.position = vec3(pos);
    VS_OUT.normal = mat3(normalMatrix) * aNormal;
    VS_OUT.texCoord = aTexCoord;
}