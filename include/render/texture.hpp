#pragma once

#include <glm/glm.hpp>
#include <glad/glad.h>

#include <stb_image.h>

#include <log.hpp>

class Texture {
    public:
        Texture() {
            glGenTextures(1, &id);
        }

        ~Texture() {
            glDeleteTextures(1, &id);
        }

        GLuint get_id() const {
            return id;
        }

        bool load(const std::string& path) {
            unsigned char* data = stbi_load(path.c_str(), &width, &height, &channels, 0);
            if (!data)
                return false;

            GLenum format;
            if (channels == 1)
                format = GL_RED;
            else if (channels == 3)
                format = GL_RGB;
            else if (channels == 4)
                format = GL_RGBA;
            else {
                LOG_ERR("Unsupported number of channels: %d", channels);
                stbi_image_free(data);
                return false;
            }

            glBindTexture(GL_TEXTURE_2D, id);
            glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
            glGenerateMipmap(GL_TEXTURE_2D);

            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            stbi_image_free(data);

            return true;
        }

        void bind(int slot) const {
            glBindTexture(GL_TEXTURE_2D + slot, id);
        }

        glm::vec2 get_size() const {
            return glm::vec2(width, height);
        }

    protected:
        GLuint id = 0;
        int width = 0;
        int height = 0;
        int channels = 0;
};