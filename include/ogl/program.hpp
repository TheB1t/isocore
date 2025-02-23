#pragma once

#include <glad/glad.h>

#include <ogl/enums.hpp>
#include <ogl/funcs.hpp>

#include <ogl/shader.hpp>

namespace ogl {
    using namespace enums;
    using namespace funcs;

    class Program {
        public:
            enum State {
                eNotLinked,
                eLinkFailure,
                eLinkSuccessful,
                eValidationFailure
            };

            Program() = default;
            Program(Program&&) = default;
            Program& operator=(Program&&) noexcept = default;

            explicit Program(GLuint handle) : program_{handle} {
                if (handle == 0) {
                    state_ = eNotLinked;
                } else {
                    GLint status;
                    getProgramiv(program_, ProgramPropertyARB::eLinkStatus, &status);
                    state_ = status == GL_FALSE ? eLinkFailure : eLinkSuccessful;
                }
            }

            template<typename... Shaders>
            explicit Program(const Shader& shader, Shaders&&... shaders) {
                attach(shader, shaders...);
                link();
            }

            ~Program() {
                if (program_.has_ownership())
                    for (size_t i = 0; i < shaders_.size(); i++)
                        detachShader(program_, shaders_[i]);
            }

            template<typename... Rest>
            Program& attach(const Shader& shader, Rest&&... rest) {
                attach(shader);
                attach(rest...);
                return *this;
            }

            Program& attach() {
                return *this;
            }

            Program& attach(const Shader& shader) {
                if (state_ == eNotLinked) {
                    shader.compile();
                    shaders_.push_back(shader.expose());

                    #if defined(OGL_DEBUG)
                        filenames_.push_back(shader.filename());
                    #endif

                    attachShader(program_, shader.expose());
                } else {
                    throw std::logic_error{"Program::attachShader called on an already linked program."};
                }

                return *this;
            }

            Program& operator<<(Shader& shader) {
                attach(shader);
                return *this;
            }

            Program& operator<<(const Shader& shader) {
                attach(shader);
                return *this;
            }

            /// Attaching rvalue reference shaders to programs only work correctly on NVIDIA.
            // Program& attachShader(Shader&& shader) = delete;

            /// Attaching rvalue reference shaders to a programs only work correctly on NVIDIA.
            // Program& operator<<(Shader&& shader) = delete;

            #if defined(OGL_DEBUG)
                std::string get_shader_names() const {
                    std::string str;
                    for (size_t i = 0; i < filenames_.size(); i++)
                        str += " - " + filenames_[i] + "\n";
                    return str;
                }
            #endif

            virtual const Program& link() {
                if (state_ == eNotLinked) {
                    linkProgram(program_);

                    GLint status;
                    getProgramiv(program_, ProgramPropertyARB::eLinkStatus, &status);
                    state_ = status == GL_FALSE ? eLinkFailure : eLinkSuccessful;

                    #if defined(OGL_DEBUG)
                        if (status == GL_FALSE) {
                            GLint log_length;
                            getProgramiv(program_, ProgramPropertyARB::eInfoLogLength, &log_length);

                            std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                            getProgramInfoLog(program_, log_length, NULL, info_log.get());

                            LOG_DEBUG("Program link failure (%s):\n%s", get_shader_names(), info_log.get());
                        } else {
                            GLint log_length;
                            getProgramiv(program_, ProgramPropertyARB::eInfoLogLength, &log_length);

                            if (log_length > 1) {
                                std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                                getProgramInfoLog(program_, log_length, NULL, info_log.get());

                                    LOG_DEBUG("Program link warning (%s):\n%s", get_shader_names(), info_log.get());
                            }

                        }
                    }
                #endif

                return *this;
            }

            void validate() {
                if (state_ == eNotLinked)
                    link();

                GLint status;
                validateProgram(program_);
                getProgramiv(program_, ProgramPropertyARB::eValidateStatus, &status);

                if (status == GL_FALSE)
                    state_ = eValidationFailure;

                #if defined(OGL_DEBUG)
                    if (status == GL_FALSE) {
                        GLint log_length;
                        getProgramiv(program_, ProgramPropertyARB::eInfoLogLength, &log_length);

                        std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                        getProgramInfoLog(program_, log_length, NULL, info_log.get());

                        LOG_DEBUG("Program validation failure (%s):\n%s", get_shader_names(), info_log.get());
                    } else {
                        GLint log_length;
                        getProgramiv(program_, ProgramPropertyARB::eInfoLogLength, &log_length);

                        if (log_length > 1) {
                            std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                            getProgramInfoLog(program_, log_length, NULL, info_log.get());

                            LOG_DEBUG("Program validation warning (%s):\n%s", get_shader_names(), info_log.get());
                        }
                    }
                #endif
            }

            void use() {
                if (state_ == eNotLinked)
                    link();

                useProgram(program_);
            }

            GLint get_uniform_loc(const char* name) const {
                return getUniformLocation(program_, name);
            }

            GLuint get_uniform_block_idx(const char* name) const {
                return getUniformBlockIndex(program_, name);
            }

            GLuint get_uniform_block_idx(const char* name, ProgramInterface iface) const {
                return getProgramResourceIndex(program_, iface, name);
            }

            template<typename ...Args>
            void set_uniform(const char* name, Args... args) {
                use();
                GLint loc = get_uniform_loc(name);
                if (loc != -1)
                    Uniform::set(loc, args...);
            }

            void bind_uniform_block(const char* name, GLuint binding) {
                GLuint idx = get_uniform_block_idx(name);
                if (idx != GL_INVALID_INDEX)
                    uniformBlockBinding(program_, idx, binding);
            }

            void bind_storage_block(const char* name, GLuint binding) {
                GLuint idx = get_uniform_block_idx(name, ProgramInterface::eShaderStorageBlock);
                if (idx != GL_INVALID_INDEX)
                    shaderStorageBlockBinding(program_, idx, binding);
            }

            State state() const {
                return state_;
            }

            const glObject& expose() const {
                return program_;
            }

        private:
            Objects::Program program_;
            std::vector<GLuint> shaders_;

            #if defined(OGL_DEBUG)
                std::vector<std::string> filenames_;
            #endif

            mutable State state_ = eNotLinked;
    };
}