#include <render/shader.hpp>

#include <resource_manager.hpp>

bool Shader::compile() {
    GLint success;

    if (compiled)
        return true;

    glShaderSource(id, 1, &source, NULL);
    glCompileShader(id);

    glGetShaderiv(id, GL_COMPILE_STATUS, &success);
    if (!success) {
        GLint log_length;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &log_length);
        std::string log(log_length, ' ');
        glGetShaderInfoLog(id, log_length, NULL, &log[0]);
        LOG_DEBUG("Shader compilation failed:\n%s", log);
        // LOG_DEBUG("Shader source:\n%s", source);
    } else {
        compiled = true;
    }

    return compiled;
}

Shader::~Shader() {
    //LOG_DEBUG("Destroying shader %d", id);
    glDeleteShader(id);
}

bool ShaderProgram::compile() {
    GLint success;

    if (compiled)
        return true;

    glLinkProgram(id);
    glGetProgramiv(id, GL_LINK_STATUS, &success);
    if (!success) {
        GLint log_length;
        glGetProgramiv(id, GL_INFO_LOG_LENGTH, &log_length);
        std::string log(log_length, ' ');
        glGetProgramInfoLog(id, log_length, NULL, &log[0]);
        LOG_DEBUG("Shader program compilation failed:\n%s", log);
    } else {
        compiled = true;
    }

    return compiled;
}

ShaderProgram::~ShaderProgram() {
    //LOG_DEBUG("Destroying shader program %d", id);
    glDeleteProgram(id);
}

void ShaderProgram::use() {
    if (!compiled) {
        LOG_ERR("Shader program not compiled, cannot use.");
        return;
    }

    glUseProgram(id);
}