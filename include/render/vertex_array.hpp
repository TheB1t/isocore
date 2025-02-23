#pragma once

#include <glad/glad.h>

#include <render/buffer.hpp>

class VertexArray {
    public:
        VertexArray() {
            glGenVertexArrays(1, &id);
        }

        ~VertexArray() {
            glDeleteVertexArrays(1, &id);
        }

        void bind() const {
            glBindVertexArray(id);
        }

        static void unbind() {
            glBindVertexArray(0);
        }

        void add_buffer(const Buffer& buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer) {
            bind();
            buffer.bind();
            glVertexAttribPointer(index, size, type, normalized, stride, pointer);
            glEnableVertexAttribArray(index);
        }

        GLuint get_id() const {
            return id;
        }

    private:
        GLuint id;
};