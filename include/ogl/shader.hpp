#pragma once

#include <sstream>

#include <ogl/ogl.hpp>

namespace ogl {
    using namespace enums;
    using namespace funcs;

    class Shader {
        public:
            enum State {
                eNotCompiled,
                eCompileFailure,
                eCompileSuccessful
            };

            Shader(Shader&&) = default;
            Shader& operator=(Shader&&) = default;

            explicit Shader(ShaderType type)
                : shader_(type), type_(type), filename_("Unnamed shader") { }

            Shader(GLuint handle, ShaderType type)
                : shader_{handle}, type_(type), filename_("Unnamed shader") {}

            Shader(ShaderType type, const std::string& file) : shader_(type), type_(type) {
                set_source(File{file});
            }

            Shader(ShaderType type, File& src) : shader_(type), type_(type) {
                set_source(src);
            }

            void set_source(const std::string& source) {
                const char* str = source.c_str();
                shaderSource(shader_, 1, &str, nullptr);
            }

            void set_source(File& source) {
                const char* str = source.get_data().get();
                filename_ = source.path;
                shaderSource(shader_, 1, &str, nullptr);
            }

            const std::string& filename() const {
                return filename_;
            }

            ShaderType type() const {
                return type_;
            }

            State state() const {
                return state_;
            }

            const glObject& expose() const  {
                return shader_;
            }

            void compile() const {
                if (state_ != eNotCompiled)
                    return;

                compileShader(shader_);

                GLint status;
                getShaderiv(shader_, ShaderParameterName::eCompileStatus, &status);
                state_ = status == GL_TRUE ? eCompileSuccessful : eCompileFailure;

                #if defined(OGL_DEBUG)
                    if (status == GL_FALSE) {
                        GLint log_length;
                        getShaderiv(shader_, ShaderParameterName::eInfoLogLength, &log_length);

                        std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                        getShaderInfoLog(shader_, log_length, nullptr, info_log.get());

                         LOG_DEBUG("Compile failure in shader '%s':\n%s", filename_, info_log.get());
                    } else {
                        GLint log_length;
                        getShaderiv(shader_, ShaderParameterName::eInfoLogLength, &log_length);

                        if (log_length > 1) {
                            std::unique_ptr<GLchar> info_log{ new GLchar[log_length + 1] };
                            getShaderInfoLog(shader_, log_length, nullptr, info_log.get());

                            LOG_DEBUG("Compile warning in shader '%s':\n%s", filename_, info_log.get());
                        }
                    }
                #endif
            }

        protected:
            mutable State state_ = eNotCompiled;

        private:
            Objects::Shader shader_;
            const ShaderType type_;
            std::string filename_;

    };

    class VertexShader : public Shader {
        public:
        VertexShader() : Shader(ShaderType::eVertexShader) { }
        explicit VertexShader(const std::string& file)
            : Shader(ShaderType::eVertexShader, file) {}
        explicit VertexShader(File& src)
            : Shader(ShaderType::eVertexShader, src) {}
    };

    class GeometryShader : public Shader {
        public:
            GeometryShader() : Shader(ShaderType::eGeometryShader) { }
            explicit GeometryShader(const std::string& file)
                : Shader(ShaderType::eGeometryShader, file) {}
            explicit GeometryShader(File& src)
                : Shader(ShaderType::eGeometryShader, src) {}
    };

    class FragmentShader : public Shader {
        public:
            FragmentShader() : Shader(ShaderType::eFragmentShader) { }
            explicit FragmentShader(const std::string& file)
                : Shader(ShaderType::eFragmentShader, file) {}
            explicit FragmentShader(File& src)
                : Shader(ShaderType::eFragmentShader, src) {}
    };
} // namespace ogl