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
            glBindBufferBase(GL_UNIFORM_BUFFER, binding, id);
            Buffer::set_data(nullptr, sizeof(T), GL_DYNAMIC_DRAW);
        };

        void set_data(const T* data) {
            bind();
            glBufferSubData(type, 0, sizeof(T), data);
        }
};