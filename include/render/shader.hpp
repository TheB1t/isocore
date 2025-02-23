#pragma once

#include <string>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <memory>
#include <filesystem>

#include <glad/glad.h>
#include <glm/gtc/type_ptr.hpp>

#include <data.hpp>

#include <log.hpp>

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


class AbstractShader {
    public:
        const GLuint id;

        AbstractShader(const GLuint id) : id(id) {}
        virtual ~AbstractShader() = default;

        virtual bool compile() = 0;

        bool is_compiled() const {
            return compiled;
        }

    protected:
        bool compiled = false;
};

class Shader : public AbstractShader {
    public:
        const GLenum type;

        Shader(const GLchar* source, GLenum type)
            : AbstractShader(glCreateShader(type)), type(type), source(source) {}
        ~Shader();

        bool compile() override;

        template<typename T>
        static std::shared_ptr<T> load_from_file(const std::filesystem::path& path) {
            static_assert(std::is_base_of<Shader, T>::value, "T must be a subclass of Shader");

            std::string file_path = path.string();
            std::string name = path.stem().string();

            try {
                File file(file_path);

                auto shader = std::make_shared<T>(file.get_data().get());
                if (!shader->compile())
                    throw std::runtime_error("Failed to compile shader");

                return shader;
            } catch (const std::runtime_error& e) {
                LOG_ERR("Failed to load shader '%s' from file '%s': %s", name, file_path, e.what());
                return nullptr;
            }
        }

    private:
        const GLchar* source;
};

class VertexShader : public Shader {
    public:
        VertexShader(const GLchar* source) : Shader(source, GL_VERTEX_SHADER) {}
};

class FragmentShader : public Shader {
    public:
        FragmentShader(const GLchar* source) : Shader(source, GL_FRAGMENT_SHADER) {}
};

class GeometryShader : public Shader {
    public:
        GeometryShader(const GLchar* source) : Shader(source, GL_GEOMETRY_SHADER) {}
};

class ShaderProgram : public AbstractShader {
    public:
        ShaderProgram()
            : AbstractShader(glCreateProgram()), vs(nullptr), fs(nullptr), gs(nullptr) {}
        ~ShaderProgram();

        bool compile() override;
        void use();

        GLint get_uniform_location(const std::string& uniform_name) {
            auto uniform = uniforms_cached.find(uniform_name);
            if (uniform != uniforms_cached.end())
                return uniform->second;

            GLint loc = glGetUniformLocation(id, uniform_name.c_str());
            if (loc == UINT32_MAX)
                LOG_WARN("Uniform '%s' not found in shader program", uniform_name);

            uniforms_cached[uniform_name] = loc;
            return loc;
        }

        GLuint get_uniform_block_index(const std::string& name) {
            auto uniform = uniform_blocks_cached.find(name);
            if (uniform != uniform_blocks_cached.end())
                return uniform->second;

            GLuint index = glGetUniformBlockIndex(id, name.c_str());
            if (index == GL_INVALID_INDEX)
                LOG_ERR("Uniform block '%s' not found in shader program '%s'", name, name);

            uniform_blocks_cached[name] = index;
            return index;
        }

        GLuint get_storage_block_index(const std::string& name) {
            auto uniform = storage_blocks_cached.find(name);
            if (uniform != storage_blocks_cached.end())
                return uniform->second;

            GLuint index = glGetProgramResourceIndex(id, GL_SHADER_STORAGE_BLOCK, name.c_str());
            if (index == GL_INVALID_INDEX)
                LOG_ERR("Storage block '%s' not found in shader program '%s'", name, name);

            storage_blocks_cached[name] = index;
            return index;
        }

        template<typename T>
        void set_uniform(const std::string& name, const T& value) {
            GLint loc = get_uniform_location(name);

            if (loc != UINT32_MAX)
                UniformSetter<T>::set(loc, value);
        }

        void bind_uniform_block(const std::string& name, GLuint binding_point) {
            GLuint index = get_uniform_block_index(name);
            if (index != GL_INVALID_INDEX)
                glUniformBlockBinding(id, index, binding_point);
        }

        void bind_storage_block(const std::string& name, GLuint binding_point) {
            GLuint index = get_storage_block_index(name);
            if (index != GL_INVALID_INDEX)
                glShaderStorageBlockBinding(id, index, binding_point);
        }

        template<typename T>
        void attach(std::shared_ptr<T> shader) {
            static_assert(std::is_base_of<Shader, T>::value, "T must be a subclass of Shader");

            if (!shader)
                return;

            glAttachShader(this->id, shader->id);
            if constexpr (std::is_same<T, VertexShader>::value)
                this->vs = shader;
            else if constexpr (std::is_same<T, FragmentShader>::value)
                this->fs = shader;
            else if constexpr (std::is_same<T, GeometryShader>::value)
                this->gs = shader;
            else
                throw std::runtime_error("Invalid shader type");
        }

    private:
        std::shared_ptr<VertexShader> vs;
        std::shared_ptr<FragmentShader> fs;
        std::shared_ptr<GeometryShader> gs;

        std::unordered_map<std::string, GLint> uniforms_cached;
        std::unordered_map<std::string, GLuint> uniform_blocks_cached;
        std::unordered_map<std::string, GLuint> storage_blocks_cached;
};