#pragma once

#include <unordered_map>
#include <memory>
#include <stdexcept>
#include <vector>
#include <filesystem>

#include <render/shader.hpp>
#include <render/model.hpp>
#include <render/texture.hpp>
#include <utils.hpp>

namespace fs = std::filesystem;

template<typename T>
using Resource = std::shared_ptr<T>;

template<typename T>
using ResourceMap = std::unordered_map<std::string, Resource<T>>;

template<typename... Ts>
class ResourceRegistry {
    public:
        template<typename T>
        ResourceMap<T>& get_map() {
            return std::get<ResourceMap<T>>(types_);
        }

        template<typename T>
        Resource<T> get(const std::string& name) {
            ResourceMap<T>& resource_map = get_map<T>();

            auto resource = resource_map.find(name);
            if (resource == resource_map.end())
                return nullptr;

            return resource->second;
        }

        template<typename T, typename... Args>
        Resource<T> make(const std::string& name, Args&&... args) {
            ResourceMap<T>& resource_map = get_map<T>();

            auto resource = resource_map.find(name);
            if (resource != resource_map.end())
                return resource->second;

            resource_map[name] = std::make_shared<T>(std::forward<Args>(args)...);
            return resource_map[name];
        }

        template<typename T>
        constexpr void destroy(const std::string& name) {
            get_map<T>().erase(name);
        }

    private:
        std::tuple<ResourceMap<Ts>...> types_;
};

class ResourceManager {
    public:
        ResourceManager(const ResourceManager&) = delete;
        ResourceManager& operator=(const ResourceManager&) = delete;

        static ResourceManager& get_instance() {
            static ResourceManager instance;
            return instance;
        }

        bool load_resources_from_folder(const std::string& folder_path = "resources") {
            if (!fs::exists(folder_path))
                return false;

            for (const auto& entry : fs::recursive_directory_iterator(folder_path)) {
                if (!entry.is_regular_file()) continue;

                const auto& fs_path = entry.path();
                const std::string path = fs_path.string();
                const std::string extension = fs_path.extension().string();

                if (extension == ".fs" || extension == ".vs" || extension == ".gs") {
                    std::string shader_name = fs_path.stem().string();

                    load<Shader>(shader_name, path,
                        extension == ".fs" ? GL_FRAGMENT_SHADER :
                        extension == ".vs" ? GL_VERTEX_SHADER :
                        GL_GEOMETRY_SHADER);
                } else if (extension == ".obj") {
                    load<Model>(path, fs_path.parent_path().string() + "/");
                } else if (extension == ".png" || extension == ".jpg" || extension == ".jpeg") {
                    load<Texture>(path);
                }
            }

            return true;
        }

        Resource<ShaderProgram> compile_shader_program(const std::string& name, std::initializer_list<std::string> shader_names) {
            std::vector<Resource<Shader>> _tmp_shaders;

            for (const std::string& shader_name : shader_names) {
                if (auto shader = get<Shader>(shader_name))
                    _tmp_shaders.push_back(shader);
                else
                    LOG_WARN("Shader '%s' not found", shader_name);
            }

            return compile_shader_program(name, _tmp_shaders);
        }

        Resource<ShaderProgram> compile_shader_program(const std::string& name, std::vector<Resource<Shader>> _shaders) {
            auto shader_program = make<ShaderProgram>(name, name, _shaders);

            if (shader_program->compile_successful())
                LOG_DEBUG("Shader program '%s' compiled", name);
            else
                LOG_DEBUG("Failed to compile shader program '%s'", name);

            return shader_program;
        }

        template<typename T = Shader>
        Resource<T> load(const std::string& name, const std::string& path, GLenum type) {
            std::string _name = name;

            switch (type) {
                case GL_VERTEX_SHADER: _name += "_vertex"; break;
                case GL_FRAGMENT_SHADER: _name += "_fragment"; break;
                case GL_GEOMETRY_SHADER: _name += "_geometry"; break;
            };

            auto content = Utils::read_file(path);

            auto shader = make<T>(_name, _name, content.c_str(), type);
            if (!shader->compile_successful()) {
                LOG_DEBUG("Failed to compile shader '%s' (%s)", _name, path);
                return nullptr;
            }

            LOG_DEBUG("Shader '%s' loaded (%s)", _name, path);
            return shader;
        }

        template<typename T = Model>
        Resource<T> load(const std::string& path, const std::string& mtl_path) {
            auto model = registry.make<T>(path);

            if (!model->load(path, mtl_path)) {
                LOG_DEBUG("Failed to load model '%s'", path);
                return nullptr;
            }

            LOG_DEBUG("Model '%s' loaded", path);
            return model;
        }

        template<typename T = Texture>
        Resource<T> load(const std::string& path) {
            auto texture = make<T>(path);

            if (!texture->load(path)) {
                LOG_DEBUG("Failed to load texture '%s'", path);
                return nullptr;
            }

            LOG_DEBUG("Texture '%s' loaded", path);
            return texture;
        }

        template<typename T>
        Resource<T> get(const std::string& name) {
            return registry.get<T>(name);
        }

        template<typename T, typename... Args>
        Resource<T> make(const std::string& name, Args&&... args) {
            return registry.make<T>(name, std::forward<Args>(args)...);
        }

        template<typename T>
        constexpr void destroy(const std::string& name) {
            registry.destroy<T>(name);
        }

    private:
        ResourceManager() = default;

        ResourceRegistry<
            Shader,
            ShaderProgram,
            Model,
            Texture
        > registry;
};