#pragma once

#include <unordered_map>
#include <memory>
#include <stdexcept>
#include <vector>
#include <filesystem>
#include <mutex>

#include <ogl/ogl.hpp>
#include <render/model.hpp>
#include <render/texture.hpp>
#include <utils.hpp>
#include <registry.hpp>

namespace fs = std::filesystem;

namespace Engine {

    template<typename ...Ts>
    using ResourceRegistry = Registry<Ts...>;

    template<typename T>
    using Resource = RegistryElement<T>;

    template<typename T>
    using ResourceMap = RegistryElementMap<T>;

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
                    const std::string name = fs_path.stem().string();

                    if (extension == ".vs")
                        load<ogl::VertexShader>(path, shader_loader<ogl::VertexShader>);
                    else if (extension == ".fs")
                        load<ogl::FragmentShader>(path, shader_loader<ogl::FragmentShader>);
                    else if (extension == ".gs")
                        load<ogl::GeometryShader>(path, shader_loader<ogl::GeometryShader>);
                    else if (extension == ".obj")
                        load<Model>(path, Model::load_from_file);
                    else if (extension == ".png" || extension == ".jpg" || extension == ".jpeg")
                        load<Texture>(path, Texture::load_from_file);
                }

                return true;
            }

            template<typename T>
            std::shared_ptr<T> load(const std::filesystem::path& path, std::function<std::shared_ptr<T>(const std::string&)> loader) {
                const std::string file_path = path.string();
                const std::string name = path.stem().string();

                std::string id = file_path;

                if (std::is_base_of_v<ogl::Shader, T>)
                    id = name;

                if (has<T>(id))
                    return get<T>(id);

                auto ptr = loader(file_path);
                if (ptr) {
                    set<T>(id, ptr);
                    LOG_DEBUG("Loaded %s", file_path);
                }

                return ptr;
            }

            std::shared_ptr<ogl::Program> compile_program(const std::string& name, const std::string& vs_name, const std::string& fs_name, const std::string& gs_name = "") {
                if (has<ogl::Program>(name))
                    return get<ogl::Program>(name);

                auto program = std::make_shared<ogl::Program>();

                auto vs = get<ogl::VertexShader>(vs_name);
                if (vs) {
                    LOG_DEBUG("Attaching vertex shader '%s' to shader program '%s'", vs_name, name);
                    program->attach(*vs);
                }

                auto fs = get<ogl::FragmentShader>(fs_name);
                if (fs) {
                    LOG_DEBUG("Attaching fragment shader '%s' to shader program '%s'", fs_name, name);
                    program->attach(*fs);
                }

                auto gs = get<ogl::GeometryShader>(gs_name);
                if (gs) {
                    LOG_DEBUG("Attaching geometry shader '%s' to shader program '%s'", gs_name, name);
                    program->attach(*gs);
                }

                program->link();

                if (program->state() != ogl::Program::eLinkSuccessful) {
                    LOG_ERR("Failed to link shader program '%s'", name);
                    return nullptr;
                }

                program->validate();

                set<ogl::Program>(name, program);
                LOG_INFO("Shader program '%s' linked", name);
                return program;
            }

            template<typename T>
            void set(const std::string& name, Resource<T> resource) {
                registry.set<T>(name, resource);
            }

            template<typename T>
            Resource<T> get(const std::string& name) {
                return registry.get<T>(name);
            }

            template<typename T>
            constexpr void erase(const std::string& name) {
                registry.erase<T>(name);
            }

            template<typename T>
            bool has(const std::string& name) {
                return registry.get<T>(name) != nullptr;
            }

            template<typename T>
            void for_each(std::function<void(const std::string&, Resource<T>)> func) {
                registry.for_each<T>(func);
            }

        private:
            ResourceManager() = default;

            ResourceRegistry<
                ogl::VertexShader,
                ogl::FragmentShader,
                ogl::GeometryShader,
                ogl::Program,
                Model,
                Texture
            > registry;

            template<typename T>
            static std::shared_ptr<T> shader_loader(const std::string& path) {
                auto shader = std::make_shared<T>(path);

                shader->compile();

                if (shader->state() != ogl::Shader::eCompileSuccessful) {
                    LOG_ERR("Failed to compile shader '%s'", path);
                    return nullptr;
                }

                LOG_INFO("Compiled shader '%s'", path);
                return shader;
            }
    };
} // namespace Engine