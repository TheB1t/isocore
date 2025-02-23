#include <render/shader.hpp>

Shader::Shader(const std::string name, const GLchar* source, GLenum type) : AbstractShader(name, glCreateShader(type)), type(type) {
    GLint success;

    glShaderSource(id, 1, &source, NULL);
    glCompileShader(id);

    glGetShaderiv(id, GL_COMPILE_STATUS, &success);
    if (!success) {
        GLint log_length;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &log_length);
        std::string log(log_length, ' ');
        glGetShaderInfoLog(id, log_length, NULL, &log[0]);
        LOG_DEBUG("Shader '%s' compilation failed: %s", name, log);
    } else {
        compiled = true;
    }
}

Shader::~Shader() {
    //LOG_DEBUG("Destroying shader %d", id);
    glDeleteShader(id);
}

ShaderProgram::ShaderProgram(const std::string name, std::vector<std::shared_ptr<Shader>> shaders) : AbstractShader(name, glCreateProgram()) {
    GLint success;

    for (auto shader : shaders) {
        LOG_DEBUG("Attaching shader '%s' to shader program '%s'", shader->name, name);

        switch (shader->type) {
            case GL_VERTEX_SHADER:   vs = vs ? LOG_FATAL("Trying to attach multiple vertex shaders to shader program"),   nullptr : shader; break;
            case GL_FRAGMENT_SHADER: fs = fs ? LOG_FATAL("Trying to attach multiple fragment shaders to shader program"), nullptr : shader; break;
            case GL_GEOMETRY_SHADER: gs = gs ? LOG_FATAL("Trying to attach multiple geometry shaders to shader program"), nullptr : shader; break;
            default:
                LOG_FATAL("Unknown shader type");
        }

        glAttachShader(id, shader->id);
    }

    glLinkProgram(id);
    glGetProgramiv(id, GL_LINK_STATUS, &success);
    if (!success) {
        GLint log_length;
        glGetProgramiv(id, GL_INFO_LOG_LENGTH, &log_length);
        std::string log(log_length, ' ');
        glGetProgramInfoLog(id, log_length, NULL, &log[0]);
        LOG_DEBUG("Shader program compilation failed: %s", log);
    } else {
        compiled = true;
    }
}

ShaderProgram::~ShaderProgram() {
    //LOG_DEBUG("Destroying shader program %d", id);
    glDeleteProgram(id);
}

void ShaderProgram::use() {
    glCullFace(culling_mode);
    glDepthFunc(depth_mode);

    glUseProgram(id);
}

void ShaderProgram::set_culling_mode(GLuint mode) {
    culling_mode = mode;
}

void ShaderProgram::set_depth_mode(GLuint mode) {
    depth_mode = mode;
}