#pragma once

#include <string>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#include <render/buffer.hpp>
#include <render/texture.hpp>

class RenderBuffer {
    public:
        const GLuint id;

        RenderBuffer() : id(0) {
            glGenRenderbuffers(1, (GLuint*)&id);
        }

        ~RenderBuffer() {
            glDeleteRenderbuffers(1, &id);
        }

        void resize(glm::ivec2 size) {
            bind();
            glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, size.x, size.y);
        }

        void bind() {
            glBindRenderbuffer(GL_RENDERBUFFER, id);
        }

        static void bind_default() {
            glBindRenderbuffer(GL_RENDERBUFFER, 0);
        }
};