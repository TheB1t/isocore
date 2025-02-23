#pragma once

#include <glad/glad.h>

#include <vector>
#include <string>
#include <memory>
#include <filesystem>

#include <glm/glm.hpp>

#include "tiny_obj_loader.h"

#include <interfaces.hpp>

#include <render/texture.hpp>
#include <render/shader.hpp>

#include <render/vertex_array.hpp>
#include <render/vertex_layout.hpp>
#include <render/buffer.hpp>

#include <utils.hpp>

#include <log.hpp>

class Model : public IDrawable {
    public:
        typedef struct {
            glm::vec3 ambient   = glm::vec3(0);
            float metallic      = 0;
            glm::vec3 diffuse   = glm::vec3(0);
            float shininess     = 0;
            glm::vec3 specular  = glm::vec3(0);
        } MaterialData_t;

        typedef struct {
            MaterialData_t data;

            std::shared_ptr<Texture> tDiffuse   =  nullptr;
            std::shared_ptr<Texture> tSpecular  =  nullptr;
            std::shared_ptr<Texture> tNormal    =  nullptr;
        } Material_t;

        typedef struct Mesh {
            VertexArray vao;

            Buffer vbo;
            Buffer ebo;

            UniformBuffer<MaterialData_t> materialBuffer;

            GLsizei indexCount;
            std::shared_ptr<Material_t> material;

            // Disallow copying
            Mesh(const Mesh&) = delete;
            Mesh& operator=(const Mesh&) = delete;

            // Allow moving
            Mesh(Mesh&&) = default;
            Mesh& operator=(Mesh&&) = default;

            Mesh() : vao(), vbo(GL_ARRAY_BUFFER), ebo(GL_ELEMENT_ARRAY_BUFFER), indexCount(0), material(nullptr), materialBuffer(0) {}
        } Mesh_t;

        Model(std::vector<std::shared_ptr<Mesh_t>> meshes, std::vector<std::shared_ptr<Material_t>> materials) : meshes(meshes), materials(materials) {}

        void draw(std::shared_ptr<ShaderProgram> shader) override;

        static std::shared_ptr<Model> load_from_file(const std::filesystem::path& path);

    private:
        std::vector<std::shared_ptr<Mesh_t>> meshes;
        std::vector<std::shared_ptr<Material_t>> materials;

        std::vector<std::vector<uint32_t>> convert_tinyobj_indices(const std::vector<tinyobj::index_t>& indices, bool keep_missing);
};