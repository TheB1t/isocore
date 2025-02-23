#pragma once

#include <string>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#include <render/buffer.hpp>
#include <render/texture.hpp>
#include <render/render_buffer.hpp>

class FrameBuffer {
    public:
        const GLuint id;

        FrameBuffer(bool autoresize = true) : id(0), size(0) {
            glGenFramebuffers(1, (GLuint*)&id);

            if (autoresize)
                Window::g_event_dispatcher.add_event_listener<EventWindowResize>(
                    [&](const EventWindowResize& event) {
                        resize(glm::ivec2(event.width, event.height));
                    });
        }

        ~FrameBuffer() {
            glDeleteFramebuffers(1, &id);
        }

        void bind() {
            glBindFramebuffer(GL_FRAMEBUFFER, id);
        }

        static void bind_default() {
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
        }

        void bind(std::shared_ptr<Texture> tex, GLenum attachment) {
            bind();
            glFramebufferTexture2D(GL_FRAMEBUFFER, attachment, tex->target, tex->id, 0);
            textures[attachment] = tex;
        }

        void bind(std::shared_ptr<RenderBuffer> render_buffer, GLenum attachment) {
            bind();
            glFramebufferRenderbuffer(GL_FRAMEBUFFER, attachment, GL_RENDERBUFFER, render_buffer->id);
            render_buffers[attachment] = render_buffer;
        }

        void resize(glm::ivec2 new_size) {
            size = new_size;

            if (!id)
                glfwSetWindowSize(glfwGetCurrentContext(), size.x, size.y);

            for (auto& [attachment, tex] : textures) {
                tex->resize(size);
                bind(tex, attachment);
            }

            for (auto& [attachment, render_buffer] : render_buffers) {
                render_buffer->resize(size);
                bind(render_buffer, attachment);
            }
        }

        glm::ivec2 get_size() {
            return size;
        }

    private:
        glm::ivec2 size;

        std::unordered_map<GLenum, std::shared_ptr<Texture>> textures;
        std::unordered_map<GLenum, std::shared_ptr<RenderBuffer>> render_buffers;
};