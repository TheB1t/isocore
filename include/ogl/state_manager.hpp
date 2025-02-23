#pragma once

#include <unordered_map>

#include <glad/glad.h>
#include <ogl/enums.hpp>
#include <ogl/funcs.hpp>
#include <ogl/gl_objects.hpp>

namespace ogl {

    class StateManager {
        public:
            static GLuint current_vao;
            static GLuint current_program;

            static std::unordered_map<GLenum, GLuint> bound_buffers;
            static std::unordered_map<GLenum, GLuint> bound_textures;
            static std::unordered_map<GLenum, GLuint> bound_framebuffers;
            static std::unordered_map<GLenum, GLuint> bound_renderbuffers;

            static void bind_vertex_array(GLuint vao) {
                if(current_vao != vao) {
                    glBindVertexArray(vao);
                    current_vao = vao;
                }
            }

            static void use_program(GLuint program) {
                if(current_program != program) {
                    glUseProgram(program);
                    current_program = program;
                }
            }

            static void bind_buffer(GLenum target, GLuint buffer) {
                auto& current = bound_buffers[target];
                if(current != buffer) {
                    glBindBuffer(target, buffer);
                    current = buffer;
                }
            }

            static void bind_texture(GLenum target, GLuint texture) {
                auto& current = bound_textures[target];
                if(current != texture) {
                    glBindTexture(target, texture);
                    current = texture;
                }
            }

            static void bind_framebuffer(GLenum target, GLuint framebuffer) {
                auto& current = bound_framebuffers[target];
                if(current != framebuffer) {
                    glBindFramebuffer(target, framebuffer);
                    current = framebuffer;
                }
            }

            static void bind_renderbuffer(GLenum target, GLuint renderbuffer) {
                auto& current = bound_renderbuffers[target]
                if(current != renderbuffer) {
                    glBindRenderbuffer(target, renderbuffer);
                    current = renderbuffer;
                }
            }
    };
} // namespace ogl