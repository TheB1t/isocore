#pragma once

#include <fstream>
#include <memory>
#include <cstring>

#include <glm/glm.hpp>

#include "stb_image.h"
#include "stb_image_write.h"

#include <log.hpp>

template<typename T>
class AbstractData {
    public:
        virtual ~AbstractData() = default;

        std::shared_ptr<T[]> get_data() {
            return data;
        }

    protected:
        std::shared_ptr<T[]> data;
        size_t size;

        void allocate(size_t size) {
            data = std::make_shared<T[]>(size);
            this->size = size;
        }
};

class File : public AbstractData<char> {
    public:
        const std::string path;

        File(const std::string& path) : path(path) {
            std::ifstream file(path, std::ios::binary);
            if (!file.is_open())
                throw std::runtime_error("Failed to open file " + path);

            file.seekg(0, std::ios::end);
            size = file.tellg();
            file.seekg(0, std::ios::beg);

            allocate(size + 1);
            file.read(data.get(), size);
        }

        operator std::string() {
            return std::string(data.get(), size);
        }
};

template<typename T>
class Image : public AbstractData<T> {
    public:
        Image(glm::ivec2 image_size, int channels, T* pData = nullptr) : image_size(image_size), channels(channels) {
            AbstractData<T>::allocate(image_size.x * image_size.y * channels);

            if (pData)
                memcpy(this->data.get(), pData, this->size * sizeof(T));
        }

        Image(const std::string& path) {
            load(path);
        }

        glm::ivec2 get_size() const {
            return image_size;
        }

        int get_channels() const {
            return channels;
        }

        template<typename U = T>
        std::enable_if_t<std::is_same<U, char>::value, void>
        load(const std::string& path) {
            unsigned char* pData = stbi_load(path.c_str(), &image_size.x, &image_size.y, &channels, 0);
            if (!pData)
                throw std::runtime_error("Failed to load image " + path);

            AbstractData<T>::allocate(image_size.x * image_size.y * channels);
            memcpy(this->data.get(), pData, this->size);
            stbi_image_free(pData);
        }

        template<typename U = T>
        std::enable_if_t<std::is_same<U, char>::value, void>
        save(const std::string& path) {
            if (!this->data)
                return;

            if (!stbi_write_png((path + ".png").c_str(), image_size.x, image_size.y, channels, this->data.get(), image_size.x * channels))
                throw std::runtime_error("Failed to save image " + path);
        }

        template<typename U = T>
        std::enable_if_t<std::is_same<U, float>::value, void>
        save(const std::string& path) {
            if (!this->data)
                return;

            if (!stbi_write_hdr((path + ".hdr").c_str(), image_size.x, image_size.y, channels, reinterpret_cast<float*>(this->data.get())))
                throw std::runtime_error("Failed to save image " + path);
        }

    private:
        glm::ivec2 image_size;
        int channels;
};