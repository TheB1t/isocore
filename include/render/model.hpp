#pragma once

#include <glad/glad.h>

#include <vector>
#include <string>
#include <memory>

#include <glm/glm.hpp>

#include "tiny_obj_loader.h"

#include <interface/drawable.hpp>

#include <render/texture.hpp>
#include <render/shader.hpp>

#include <render/vertex_array.hpp>
#include <render/buffer.hpp>

#include <utils.hpp>

#include <log.hpp>

class Model : public IDrawable {
    public:
        typedef struct {
            const int tDiffuse  = 0;
            const int tNormal   = 1;
            const int tSpecular = 2;

            glm::vec3 ambient   = glm::vec3(0);
            glm::vec3 diffuse   = glm::vec3(0);
            glm::vec3 specular  = glm::vec3(0);

            float metallic      = 0;
            float shininess     = 0;
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

            Mesh() : vao(), vbo(GL_ARRAY_BUFFER), ebo(GL_ELEMENT_ARRAY_BUFFER), indexCount(0), material(nullptr), materialBuffer(1) {};
        } Mesh_t;

        void draw(std::shared_ptr<ShaderProgram> shader) override;

        bool load(const std::string& path, const std::string& mtl_path);

    private:
        std::vector<std::shared_ptr<Mesh_t>> meshes;
        std::vector<std::shared_ptr<Material_t>> materials;

        std::vector<std::vector<uint32_t>> convert_tinyobj_indices(const std::vector<tinyobj::index_t>& indices, bool keep_missing);
};