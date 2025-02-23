#pragma once

#include <filesystem>

#include <ogl/ogl.hpp>

#include <glm/glm.hpp>

#include <stb_image.h>
#include <stb_image_write.h>

#include <interfaces.hpp>
#include <data.hpp>

#include <log.hpp>

namespace Engine {
    using namespace ogl::enums;
    using namespace ogl::funcs;

    class Texture : public ogl::Objects::Texture {
        public:
            const TextureTarget target;

            Texture(Image<char>& img) : target(TextureTarget::eTexture2d) {
                type = PixelType::eUnsignedByte;
                size = img.get_size();

                switch (img.get_channels()) {
                    case 1:
                        i_format = InternalFormat::eRed;
                        format = PixelFormat::eRed;
                        break;
                    case 3:
                        i_format = InternalFormat::eRgb;
                        format = PixelFormat::eRgb;
                        break;
                    case 4:
                        i_format = InternalFormat::eRgba;
                        format = PixelFormat::eRgba;
                        break;
                }

                set_data(img.get_data().get());
            }

            Texture(TextureTarget target, InternalFormat i_format, PixelFormat format, PixelType type, glm::ivec2 size = {0,0})
                : target(target), i_format(i_format), format(format), type(type), size(size) {}

            void set_data(const void* data) {
                bind();
                texImage2D(target, 0, (GLenum)i_format, size.x, size.y, 0, format, type, data);
            }

            void resize(glm::ivec2 size) {
                this->size = size;
                set_data(nullptr);
            }

            void use(TextureUnit slot) {
                activeTexture(slot);
                bind();
            }

            glm::ivec2 get_size() const {
                return size;
            }

            static std::shared_ptr<Texture> load_from_file(const std::filesystem::path& path) {
                try {
                    Image<char> img(path);

                    img.load(path);
                    auto tex = std::make_shared<Texture>(img);

                    tex->bind();
                    texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMinFilter, (GLenum)TextureMinFilter::eLinearMipmapLinear);
                    texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMagFilter, (GLenum)TextureMagFilter::eLinear);
                    texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureWrapS, (GLenum)TextureWrapMode::eRepeat);
                    texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureWrapT, (GLenum)TextureWrapMode::eRepeat);
                    generateMipmap(TextureTarget::eTexture2d);

                    return tex;
                } catch (const std::exception& e) {
                    LOG_ERR("Failed to load image %s: %s", path.c_str(), e.what());
                    return nullptr;
                }
            }

            template<typename T>
            void save(const std::string& filename) {
                int channels = 0;

                switch (format) {
                    case PixelFormat::eRed:
                        channels = 1;
                        break;
                    case PixelFormat::eRgb:
                        channels = 3;
                        break;
                    case PixelFormat::eRgba:
                        channels = 4;
                        break;
                }

                Image<T> img(size, channels);

                bind();
                getTexImage(target, 0, format, type, img.get_data().get());

                try {
                    img.save(filename);
                    LOG_INFO("Saved texture %s", filename.c_str());
                } catch (const std::exception& e) {
                    LOG_ERR("Failed to save texture %s: %s", filename.c_str(), e.what());
                }
            }

            void bind() {
                ogl::Objects::Texture::bind(target);
            }

            void unbind() {
                ogl::Objects::Texture::unbind(target);
            }

        private:
            InternalFormat i_format;
            PixelFormat format;
            PixelType type;
            glm::ivec2 size;
    };
}