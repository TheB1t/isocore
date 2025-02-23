#pragma once

#include <glad/glad.h>
#include <vector>

class Buffer {
    public:
        Buffer(GLenum type) : type(type) {
            glGenBuffers(1, &id);
        }

        ~Buffer() {
            glDeleteBuffers(1, &id);
        }

        void bind() const {
            glBindBuffer(type, id);
        }

        void unbind() const {
            glBindBuffer(type, 0);
        }

        void set_data(const void* data, int size, GLenum usage) {
            bind();
            glBufferData(type, size, data, usage);
        }

        template<typename T>
        void set_data(const std::vector<T>& data, GLenum usage) {
            set_data(data.data(), data.size() * sizeof(T), usage);
        }

        GLuint get_id() const {
            return id;
        }

    protected:
        GLuint id;
        GLenum type;
};

template<typename T>
class UniformBuffer : public Buffer {
    public:
       UniformBuffer(GLint binding) : Buffer(GL_UNIFORM_BUFFER) {
            bind();
            Buffer::set_data(NULL, sizeof(T), GL_DYNAMIC_DRAW);
            glBindBufferRange(type, binding, id, 0, sizeof(T));
        };

        void set_data(const T& data) {
            bind();
            glBufferSubData(type, 0, sizeof(T), &data);
        }
};

template<typename T>
class StorageBuffer : public Buffer {
    public:
        StorageBuffer(GLint binding) : Buffer(GL_SHADER_STORAGE_BUFFER) {
            bind();
            glBindBufferBase(type, binding, id);
        }

        void set_data(const std::vector<T>& data) {
            Buffer::set_data(data, GL_DYNAMIC_DRAW);
        }
};