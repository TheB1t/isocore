#include <render/model.hpp>

#include <resource_manager.hpp>

namespace Engine {

    void Model::draw() {
        for (const auto& mesh : meshes)
            mesh->draw();
    }

    std::shared_ptr<Model> Model::load_from_file(const std::filesystem::path& path) {
        tinyobj::attrib_t o_attrib;
        std::vector<tinyobj::shape_t> o_shapes;
        std::vector<tinyobj::material_t> o_materials;
        std::string warn, err;

        const std::string file_path = path.string();
        const std::string relative_path = path.parent_path().string() + "/";

        auto& rm = ResourceManager::get_instance();

        if (!tinyobj::LoadObj(&o_attrib, &o_shapes, &o_materials, &warn, &err, file_path.c_str(), relative_path.c_str()))
            throw std::runtime_error(warn + err);

        std::vector<std::shared_ptr<Mesh>> meshes;
        std::vector<std::shared_ptr<Material_t>> materials;

        for (const auto& mat : o_materials) {
            auto material = std::make_shared<Material_t>();

            material->data.ambient = Utils::arr_to_glm<3>(mat.ambient);
            material->data.diffuse = Utils::arr_to_glm<3>(mat.diffuse);
            material->data.specular = Utils::arr_to_glm<3>(mat.specular);
            material->data.shininess = mat.shininess;

            auto loadTexture = [&](const std::string& name) -> std::shared_ptr<Texture> {
                if (name.empty())
                    return nullptr;

                return rm.load<Texture>(relative_path + name, Texture::load_from_file);
            };

            material->tDiffuse = loadTexture(mat.diffuse_texname);
            material->tSpecular = loadTexture(mat.specular_texname);
            material->tNormal = loadTexture(mat.normal_texname);

            materials.push_back(material);
        }

        for (const auto& shape : o_shapes) {
            auto mesh = std::make_shared<Mesh>();

            std::vector<GLuint> indices;
            std::vector<GLfloat> buffer;
            size_t hash;
            std::unordered_map<size_t, int> uniqueVerteces;

            glm::vec3* vertices_data = reinterpret_cast<glm::vec3*>(o_attrib.vertices.data());
            glm::vec3* normals_data = reinterpret_cast<glm::vec3*>(o_attrib.normals.data());
            glm::vec2* texcoords_data = reinterpret_cast<glm::vec2*>(o_attrib.texcoords.data());

            for (const auto& index : shape.mesh.indices) {
                hash = 0;
                Utils::hash_combine(hash,
                    vertices_data[index.vertex_index].x,
                    vertices_data[index.vertex_index].y,
                    vertices_data[index.vertex_index].z,
                    normals_data[index.normal_index].x,
                    normals_data[index.normal_index].y,
                    normals_data[index.normal_index].z,
                    texcoords_data[index.texcoord_index].x,
                    texcoords_data[index.texcoord_index].y
                );

                if (uniqueVerteces.find(hash) == uniqueVerteces.end()) {
                    uniqueVerteces[hash] = buffer.size() / 8;

                    buffer.push_back(vertices_data[index.vertex_index].x);
                    buffer.push_back(vertices_data[index.vertex_index].y);
                    buffer.push_back(vertices_data[index.vertex_index].z);

                    buffer.push_back(normals_data[index.normal_index].x);
                    buffer.push_back(normals_data[index.normal_index].y);
                    buffer.push_back(normals_data[index.normal_index].z);

                    buffer.push_back(texcoords_data[index.texcoord_index].x);
                    buffer.push_back(1 - texcoords_data[index.texcoord_index].y);
                }

                indices.push_back(uniqueVerteces[hash]);
            }

            if (buffer.empty() || indices.empty()) {
                LOG_ERR("Empty mesh data in %s", shape.name.c_str());
                continue;
            }

            mesh->primitive = PrimitiveType::eTriangles;
            mesh->draw_type = Mesh::eDrawElements;
            mesh->count = indices.size();
            mesh->vao.bind();
            mesh->vbo.set_data(buffer, BufferUsageARB::eDynamicDraw);
            mesh->ebo.set_data(indices, BufferUsageARB::eDynamicDraw);
            BaseLayout::setup_buffers(mesh->vao, mesh->vbo);
            mesh->vao.unbind();

            if (!materials.empty() && shape.mesh.material_ids[0] >= 0)
                mesh->material = materials[shape.mesh.material_ids[0]];

            meshes.push_back(mesh);
        }

        return std::make_shared<Model>(meshes, materials);
    }


    std::shared_ptr<Model> Model::generate_primitive_object(int type) {
        std::vector<std::shared_ptr<Mesh>> meshes;

        auto mesh = std::make_shared<Mesh>();
        switch (type) {
            case 0: {
                std::vector<GLfloat> quadVertices = {
                    // positions        // texture Coords
                    -1.0f,  1.0f, 0.0f, 0.0f, 1.0f,
                    -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,
                     1.0f,  1.0f, 0.0f, 1.0f, 1.0f,
                     1.0f, -1.0f, 0.0f, 1.0f, 0.0f,
                };

                mesh->primitive = PrimitiveType::eTriangleStrip;
                mesh->draw_type = Mesh::eDrawArrays;
                mesh->count = 4;
                mesh->vao.bind();
                mesh->vbo.set_data(quadVertices, BufferUsageARB::eStaticDraw);
                LightPassLayout::setup_buffers(mesh->vao, mesh->vbo);
                mesh->vao.unbind();
            } break;
        }

        meshes.push_back(mesh);
        return std::make_shared<Model>(meshes);
    }
} // namespace Engine