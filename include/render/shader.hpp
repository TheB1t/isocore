#pragma once

#include <string>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <memory>

#include <glad/glad.h>
#include <glm/gtc/type_ptr.hpp>

#include <log.hpp>

class AbstractShader {
    public:
        const GLuint id;
        const std::string name;

        AbstractShader(const std::string name, const GLuint id) : name(name), id(id) {}
        virtual ~AbstractShader() = default;

        bool compile_successful() const {
            return compiled;
        }

    protected:
        bool compiled = false;
};

class Shader : public AbstractShader {
    public:
        const GLenum type;

        Shader(const std::string name, const GLchar* source, GLenum type);
        ~Shader();

        void attach(GLuint id);
};

template<typename T>
struct UniformSetter {
    static void set(GLint loc, const T& value) {
        LOG_WARN("Unsupported uniform type: %s", typeid(T).name());
    }
};

template<>
struct UniformSetter<glm::mat4> {
    static void set(GLint loc, const glm::mat4& value) {
        glUniformMatrix4fv(loc, 1, GL_FALSE, glm::value_ptr(value));
    }
};

template<>
struct UniformSetter<glm::mat3> {
    static void set(GLint loc, const glm::mat3& value) {
        glUniformMatrix3fv(loc, 1, GL_FALSE, glm::value_ptr(value));
    }
};

template<>
struct UniformSetter<glm::vec4> {
    static void set(GLint loc, const glm::vec4& value) {
        glUniform4fv(loc, 1, glm::value_ptr(value));
    }
};

template<>
struct UniformSetter<glm::vec3> {
    static void set(GLint loc, const glm::vec3& value) {
        glUniform3fv(loc, 1, glm::value_ptr(value));
    }
};

template<>
struct UniformSetter<glm::vec2> {
    static void set(GLint loc, const glm::vec2& value) {
        glUniform2fv(loc, 1, glm::value_ptr(value));
    }
};

template<>
struct UniformSetter<int> {
    static void set(GLint loc, const int& value) {
        glUniform1i(loc, value);
    }
};

template<>
struct UniformSetter<float> {
    static void set(GLint loc, const float& value) {
        glUniform1f(loc, value);
    }
};

template<>
struct UniformSetter<uint32_t> {
    static void set(GLint loc, const uint32_t& value) {
        glUniform1ui(loc, value);
    }
};

class ShaderUniform {
    public:
        ShaderUniform(AbstractShader& shader, const std::string& name) {
            loc = glGetUniformLocation(shader.id, name.c_str());
            if (loc == UINT32_MAX)
                LOG_ERR("Uniform '%s' not found in shader program '%s'", name, shader.name);
        }

        template<typename T>
        void set(const T& value) const {
            if (loc != UINT32_MAX)
                UniformSetter<T>::set(loc, value);
        }

    private:
        GLint loc;
};

class ShaderProgram : public AbstractShader {
    public:
        ShaderProgram(const std::string name, std::vector<std::shared_ptr<Shader>> shaders);
        ~ShaderProgram();

        void use();

        template<typename T>
        void set_uniform(const std::string& name, const T& value) {
            try { uniforms.at(name).set(value); } catch (std::out_of_range&) {
                auto val = uniforms.emplace(name, ShaderUniform(*this, name));
                val.first->second.set(value);
            }
        }

        void set_culling_mode(GLuint mode);
        void set_depth_mode(GLuint mode);

    private:
        std::shared_ptr<Shader> vs;
        std::shared_ptr<Shader> fs;
        std::shared_ptr<Shader> gs;

        GLuint culling_mode = GL_FRONT_AND_BACK;
        GLuint depth_mode   = GL_ALWAYS;

        std::unordered_map<std::string, ShaderUniform> uniforms;
};