#pragma once

#include <vector>

#include <ogl/ogl.hpp>
#include <window.hpp>

namespace Engine {
    template<typename T>
    class Buffer : public ogl::Objects::Buffer {
        public:
            const BufferTargetARB target;

            Buffer(BufferTargetARB target) : target(target) {}

            void set_data(const void* data, BufferUsageARB usage, GLsizeiptr size = 1) {
                bind();
                bufferData(target, size * sizeof(T), data, usage);
            }

            void set_sub_data(const void* data, BufferUsageARB usage, GLsizeiptr size = 1, GLintptr offset = 0) {
                bind();
                bufferSubData(target, offset, size * sizeof(T), data);
            }

            inline void set_data(const std::vector<T>& data, BufferUsageARB usage) {
                set_data(data.data(), usage, data.size());
            }

            inline void set_sub_data(const std::vector<T>& data, BufferUsageARB usage, GLintptr offset = 0) {
                set_sub_data(data.data(), usage, data.size(), offset);
            }

            inline void set_data(const T& data, BufferUsageARB usage) {
                set_data(&data, usage, 1);
            }

            inline void set_sub_data(const T& data, BufferUsageARB usage, GLintptr offset = 0) {
                set_sub_data(&data, usage, 1, offset);
            }

            void bind() {
                ogl::Objects::Buffer::bind(target);
            }

            void unbind() {
                ogl::Objects::Buffer::unbind(target);
            }
    };

    template<typename T>
    class UniformBuffer : public Buffer<T> {
        public:
            UniformBuffer(GLint binding) : Buffer<T>(BufferTargetARB::eUniformBuffer) {
                this->set_data(NULL, BufferUsageARB::eDynamicDraw);
                this->bind_range(this->target, binding, 0, sizeof(T));
            };
    };

    template<typename T>
    class StorageBuffer : public Buffer<T> {
        public:
            StorageBuffer(GLint binding) : Buffer<T>(BufferTargetARB::eShaderStorageBuffer) {
                this->bind();
                this->bind_base(this->target, binding);
            }
    };

    class RenderBuffer : public ogl::Objects::Renderbuffer {
        public:
            void resize(glm::ivec2 size) {
                bind(RenderbufferTarget::eRenderbuffer);
                renderbufferStorage(RenderbufferTarget::eRenderbuffer, InternalFormat::eDepth24Stencil8, size.x, size.y);
            }
    };

    class VertexArray : public ogl::Objects::VertexArray {
        public:
            void add_buffer(GLuint index, GLint size, VertexAttribPointerType type, GLboolean normalized, GLsizei stride, const void* pointer) {
                bind();
                // LOG_DEBUG("Index: %d, Size: %d, Type: %d, Normalized: %d, Stride: %d, Pointer: %p", index, size, (GLenum)type, normalized, stride, pointer);
                vertexAttribPointer(index, size, type, normalized, stride, pointer);
                enableVertexAttribArray(index);
            }
    };

    class FrameBuffer : public ogl::Objects::Framebuffer {
        public:
            FrameBuffer(bool autoresize = true) : size(0) {
                if (autoresize)
                    Window::g_event_dispatcher.add_event_listener<EventWindowResize>(
                        [&](const EventWindowResize& event) {
                            resize(glm::ivec2(event.width, event.height));
                        });
            }

            void bind_obj(std::shared_ptr<Texture> tex, FramebufferAttachment attachment) {
                bind(FramebufferTarget::eFramebuffer);
                framebufferTexture2D(FramebufferTarget::eFramebuffer, attachment, tex->target, *tex, 0);
                textures[attachment] = tex;
            }

            void bind_obj(std::shared_ptr<RenderBuffer> render_buffer, FramebufferAttachment attachment) {
                bind(FramebufferTarget::eFramebuffer);
                framebufferRenderbuffer(FramebufferTarget::eFramebuffer, attachment, RenderbufferTarget::eRenderbuffer, *render_buffer);
                render_buffers[attachment] = render_buffer;
            }

            void resize(glm::ivec2 new_size) {
                size = new_size;
                for (auto& [attachment, tex] : textures) {
                    tex->resize(size);
                    bind_obj(tex, attachment);
                }

                for (auto& [attachment, render_buffer] : render_buffers) {
                    render_buffer->resize(size);
                    bind_obj(render_buffer, attachment);
                }
            }

            glm::ivec2 get_size() {
                return size;
            }

        private:
            glm::ivec2 size;

            std::unordered_map<FramebufferAttachment, std::shared_ptr<Texture>> textures;
            std::unordered_map<FramebufferAttachment, std::shared_ptr<RenderBuffer>> render_buffers;
    };
} // namespace Engine