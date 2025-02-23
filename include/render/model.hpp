#pragma once

#include <ogl/ogl.hpp>

#include <vector>
#include <string>
#include <memory>
#include <filesystem>

#include <glm/glm.hpp>

#include "tiny_obj_loader.h"

#include <interfaces.hpp>

#include <render/texture.hpp>

#include <render/buffer.hpp>
#include <render/vertex_layout.hpp>
#include <render/buffer.hpp>

#include <utils.hpp>

#include <log.hpp>

namespace Engine {

    class Model {
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

            struct Mesh {
                enum DrawType {
                    eDrawElements,
                    eDrawArrays
                } draw_type;

                PrimitiveType primitive;
                GLsizei count;
                std::shared_ptr<Material_t> material;

                VertexArray vao;
                Buffer<GLfloat> vbo;
                Buffer<GLuint> ebo;
                UniformBuffer<MaterialData_t> materialBuffer;

                Mesh() : draw_type(eDrawElements), primitive(PrimitiveType::eTriangles), vbo(BufferTargetARB::eArrayBuffer), ebo(BufferTargetARB::eElementArrayBuffer), count(0), material(nullptr), materialBuffer(0) {}

                void draw() {
                    if (material) {
                        if (material->tDiffuse)   material->tDiffuse->use(TextureUnit::eTexture0);
                        if (material->tSpecular)  material->tSpecular->use(TextureUnit::eTexture1);
                        if (material->tNormal)    material->tNormal->use(TextureUnit::eTexture2);

                        materialBuffer.set_data(material->data, BufferUsageARB::eDynamicDraw);
                    }

                    vao.bind();

                    switch (draw_type) {
                        case eDrawElements:
                            drawElements(primitive, count, DrawElementsType::eUnsignedInt, nullptr);
                            break;

                        case eDrawArrays:
                            drawArrays(primitive, 0, count);
                            break;

                        default:
                            throw std::runtime_error("Unknown draw type");
                    }
                }

                // Disallow copying
                Mesh(const Mesh&) = delete;
                Mesh& operator=(const Mesh&) = delete;

                // Allow moving
                Mesh(Mesh&&) = default;
                Mesh& operator=(Mesh&&) = default;

            };

            Model(std::vector<std::shared_ptr<Mesh>> meshes, std::vector<std::shared_ptr<Material_t>> materials = {}) : meshes(meshes), materials(materials) {}

            void draw();

            static std::shared_ptr<Model> load_from_file(const std::filesystem::path& path);
            static std::shared_ptr<Model> generate_primitive_object(int type);

        private:
            std::vector<std::shared_ptr<Mesh>> meshes;
            std::vector<std::shared_ptr<Material_t>> materials;

            std::vector<std::vector<uint32_t>> convert_tinyobj_indices(const std::vector<tinyobj::index_t>& indices, bool keep_missing);
    };
} // namespace Engine