#pragma once

#include <filesystem>

#include <glm/glm.hpp>
#include <glad/glad.h>

#include <stb_image.h>
#include <stb_image_write.h>

#include <interfaces.hpp>
#include <data.hpp>

#include <log.hpp>

class Texture {
    public:
        const GLuint id;
        const GLenum target;
        const GLint internal_format;
        const GLenum format;
        const GLenum type;

        Texture(Image<char>& img) : Texture(GL_TEXTURE_2D, channels2format(img.get_channels()), channels2format(img.get_channels()), GL_UNSIGNED_BYTE, img.get_size()) {
            set_data(img.get_data().get());
            glGenerateMipmap(target);
        }

        Texture(GLenum target, GLint internal_format, GLenum format, GLenum type, glm::ivec2 size = {0,0}) : id(0), target(target), internal_format(internal_format), format(format), type(type), size(size) {
            glGenTextures(1, (GLuint*)&id);
        }

        ~Texture() {
            glDeleteTextures(1, &id);
        }

        void set_data(const void* data) {
            bind();
            glTexImage2D(target, 0, internal_format, size.x, size.y, 0, format, type, data);
        }

        void resize(glm::ivec2 size) {
            this->size = size;
            set_data(nullptr);
        }

        void bind() {
            glBindTexture(target, id);
        }

        void unbind() {
            glBindTexture(target, 0);
        }

        void use(int slot) {
            glActiveTexture(GL_TEXTURE0 + slot);
            bind();
        }

        glm::ivec2 get_size() const {
            return size;
        }

        static int format2channels(GLenum format) {
            switch (format) {
                case GL_RED:
                    return 1;
                case GL_RGB:
                    return 3;
                case GL_RGBA:
                    return 4;
                default:
                    return 0;
            }
        }

        static GLint channels2format(int channels) {
            switch (channels) {
                case 1:
                    return GL_RED;
                case 3:
                    return GL_RGB;
                case 4:
                    return GL_RGBA;
                default:
                    return 0;
            }
        }

        static std::shared_ptr<Texture> load_from_file(const std::filesystem::path& path) {
            try {
                Image<char> img(path);

                img.load(path);
                auto tex = std::make_shared<Texture>(img);

                tex->bind();
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

                return tex;
            } catch (const std::exception& e) {
                LOG_ERR("Failed to load image %s: %s", path.c_str(), e.what());
                return nullptr;
            }
        }

        template<typename T>
        void save(const std::string& filename) {
            Image<T> img(size, format2channels(format));

            bind();
            glGetTexImage(target, 0, format, type, img.get_data().get());

            try {
                img.save(filename);
                LOG_INFO("Saved texture %s", filename.c_str());
            } catch (const std::exception& e) {
                LOG_ERR("Failed to save texture %s: %s", filename.c_str(), e.what());
            }
        }

    private:
        glm::ivec2 size;
};