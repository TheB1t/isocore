#pragma once

#include <memory>

#include <glad/glad.h>

#include <ogl/enums.hpp>
#include <ogl/funcs.hpp>

namespace ogl {
    using namespace ogl::enums;
    using namespace ogl::funcs;

    class glObject {
        public:
            glObject(const glObject&) = delete;
            glObject& operator=(const glObject&) = delete;

            glObject(glObject&& other) noexcept
                : handle_{other.handle_}, ownership_{other.ownership_} {
                other.handle_ = 0;
                other.ownership_ = false;
            }

            glObject& operator=(glObject&& other) noexcept {
                std::swap(handle_, other.handle_);
                std::swap(ownership_, other.ownership_);
                return *this;
            }

            bool operator==(const glObject& other) const {
                return handle_ == other.handle_;
            }

            bool has_ownership() const {
                return ownership_;
            }

            operator GLuint() const {
                return handle_;
            }

        protected:
            GLuint handle_ = 0;
            bool ownership_ = false;

            glObject() = default;
    };

namespace Objects {
    using namespace enums;
    using namespace funcs;

    class Shader : public glObject {
        public:
            explicit Shader(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Shader(ShaderType shader_t) {
                handle_ = createShader(shader_t);
                ownership_ = true;
            }

            ~Shader() {
                if (ownership_)
                    deleteShader(handle_);
            }

            Shader(Shader&&) noexcept = default;
            Shader& operator=(Shader&&) noexcept = default;
    };

    class Program : public glObject {
        public:
            explicit Program(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Program() {
                handle_ = createProgram();
                ownership_ = true;
            }

            ~Program() {
                if (ownership_)
                    deleteProgram(handle_);
            }

            Program(Program&&) noexcept = default;
            Program& operator=(Program&&) noexcept = default;
    };

    class VertexArray : public glObject {
        public:
            explicit VertexArray(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit VertexArray() {
                genVertexArrays(1, &handle_);
                ownership_ = true;
            }

            ~VertexArray() {
                if (ownership_)
                    deleteVertexArrays(1, &handle_);
            }

            void bind() {
                bindVertexArray(handle_);
            }

            void unbind() {
                bindVertexArray(0);
            }

            VertexArray(VertexArray&&) noexcept = default;
            VertexArray& operator=(VertexArray&&) noexcept = default;
    };

    class Buffer : public glObject {
        public:
            explicit Buffer(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Buffer() {
                genBuffers(1, &handle_);
                ownership_ = true;
            }

            ~Buffer() {
                if (ownership_)
                    deleteBuffers(1, &handle_);
            }

            void bind_base(BufferTargetARB target, GLuint index) {
                bind(target);
                bindBufferBase(target, index, handle_);
                unbind(target);
            }

            void bind_range(BufferTargetARB target, GLuint index, GLintptr offset, GLsizeiptr size) {
                bind(target);
                bindBufferRange(target, index, handle_, offset, size);
                unbind(target);
            }

            void bind(BufferTargetARB target) {
                bindBuffer(target, handle_);
            }

            void unbind(BufferTargetARB target) {
                // Lead to segmentation fault in glDrawElements (and others)
                // bindBuffer(target, 0);
            }

            Buffer(Buffer&&) noexcept = default;
            Buffer& operator=(Buffer&&) noexcept = default;
    };

    class Texture : public glObject {
        public:
            explicit Texture(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Texture() {
                genTextures(1, &handle_);
                ownership_ = true;
            }

            ~Texture() {
                if (ownership_)
                    deleteTextures(1, &handle_);
            }

            void bind(TextureTarget target) {
                bindTexture(target, handle_);
            }

            void unbind(TextureTarget target) {
                bindTexture(target, 0);
            }

            Texture(Texture&&) noexcept = default;
            Texture& operator=(Texture&&) noexcept = default;
    };

    class Framebuffer : public glObject {
        public:
            explicit Framebuffer(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Framebuffer() {
                genFramebuffers(1, &handle_);
                ownership_ = true;
            }

            ~Framebuffer() {
                if (ownership_)
                    deleteFramebuffers(1, &handle_);
            }

            void bind(FramebufferTarget target) {
                bindFramebuffer(target, handle_);
            }

            void unbind(FramebufferTarget target) {
                bindFramebuffer(target, 0);
            }

            Framebuffer(Framebuffer&&) noexcept = default;
            Framebuffer& operator=(Framebuffer&&) noexcept = default;
    };

    class Renderbuffer : public glObject {
        public:
            explicit Renderbuffer(GLuint handle) {
                handle_ = handle;
                ownership_ = false;
            }

            explicit Renderbuffer() {
                genRenderbuffers(1, &handle_);
                ownership_ = true;
            }

            ~Renderbuffer() {
                if (ownership_)
                    deleteRenderbuffers(1, &handle_);
            }

            void bind(RenderbufferTarget target) {
                bindRenderbuffer(target, handle_);
            }

            void unbind(RenderbufferTarget target) {
                bindRenderbuffer(target, 0);
            }

            Renderbuffer(Renderbuffer&&) noexcept = default;
            Renderbuffer& operator=(Renderbuffer&&) noexcept = default;
    };
} // namespace Objects
} // namespace ogl