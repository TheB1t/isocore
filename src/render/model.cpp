#include <render/model.hpp>

#include <resource_manager.hpp>
#include <render/vertex_layout.hpp>

void Model::draw(std::shared_ptr<ShaderProgram> shader) {
    for (const auto& mesh : meshes) {
        if (mesh->material) {
            auto material = mesh->material;

            shader->set_uniform("tDiffuse", 0);
            shader->set_uniform("tSpecular", 1);
            shader->set_uniform("tNormal", 2);

            if (material->tDiffuse)   material->tDiffuse->bind(0);
            if (material->tSpecular)  material->tSpecular->bind(1);
            if (material->tNormal)    material->tNormal->bind(2);

            mesh->materialBuffer.set_data(&material->data);
        }

        mesh->vao.bind();
        glDrawElements(GL_TRIANGLES, mesh->indexCount, GL_UNSIGNED_INT, nullptr);
    }
}

bool Model::load(const std::string& path, const std::string& mtl_path) {
    tinyobj::attrib_t o_attrib;
    std::vector<tinyobj::shape_t> o_shapes;
    std::vector<tinyobj::material_t> o_materials;
    std::string warn, err;

    auto& rm = ResourceManager::get_instance();

    if (!tinyobj::LoadObj(&o_attrib, &o_shapes, &o_materials, &warn, &err, path.c_str(), mtl_path.c_str())) {
        LOG_FATAL("Failed to load model: %s %s", warn.c_str(), err.c_str());
        return false;
    }

    for (const auto& mat : o_materials) {
        auto material = std::make_shared<Material_t>();

        material->data.ambient = Utils::arr_to_glm<3>(mat.ambient);
        material->data.diffuse = Utils::arr_to_glm<3>(mat.diffuse);
        material->data.specular = Utils::arr_to_glm<3>(mat.specular);
        material->data.shininess = mat.shininess;

        if (!mat.diffuse_texname.empty())
            material->tDiffuse = rm.load<Texture>(mtl_path + mat.diffuse_texname);

        if (!mat.specular_texname.empty())
            material->tSpecular = rm.load<Texture>(mtl_path + mat.specular_texname);

        if (!mat.normal_texname.empty())
            material->tNormal = rm.load<Texture>(mtl_path + mat.normal_texname);

        LOG_INFO("Material: %s", mat.name.c_str());
        LOG_INFO("- Ambient: %s", Utils::glm_to_string(material->data.ambient).c_str());
        LOG_INFO("- Diffuse: %s", Utils::glm_to_string(material->data.diffuse).c_str());
        LOG_INFO("- Specular: %s", Utils::glm_to_string(material->data.specular).c_str());
        LOG_INFO("- Shininess: %f", material->data.shininess);

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

        mesh->vao.bind();
        mesh->vbo.set_data(buffer.data(), buffer.size() * sizeof(GLfloat), GL_STATIC_DRAW);
        mesh->ebo.set_data(indices.data(), indices.size() * sizeof(GLuint), GL_STATIC_DRAW);

        BaseLayout::setup_buffers(mesh->vao, mesh->vbo);

        mesh->indexCount = indices.size();

        if (!materials.empty() && shape.mesh.material_ids[0] >= 0)
            mesh->material = materials[shape.mesh.material_ids[0]];

        meshes.push_back(mesh);
    }

    return true;
}