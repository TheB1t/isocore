#pragma once

#include <glm/glm.hpp>

#include <render/buffer.hpp>
#include <interfaces.hpp>

namespace Engine {

    struct PointLight {
        glm::vec3 position  = glm::vec3(0.0f);
        float dist          = 1.0f;
        glm::vec3 color     = glm::vec3(1.0f);
        float pad0;
    };

    struct DirectLight {
        glm::vec3 direction = glm::vec3(0.4f, -1.0f, -1.0f);
        float pad0;
        glm::vec3 color     = glm::vec3(1.0f);
        float pad1;
        glm::vec3 ambient   = glm::vec3(0.2f, 0.2f, 0.2f);
        float pad2;
    };

    class Lighting : public IBindable, public IGuiDrawable {
        public:
            std::vector<PointLight> point;
            DirectLight direct;

            Lighting() : point_buffer(1), direct_buffer(2) {}

            void update() {
                point_buffer.set_data(point, BufferUsageARB::eDynamicDraw);
                direct_buffer.set_data(direct, BufferUsageARB::eDynamicDraw);
            }

            void bind(std::shared_ptr<ogl::Program> shader) {
                point_buffer.bind();
                direct_buffer.bind();

                shader->set_uniform("pLightsCount", (int)point.size());
            }

            void draw_gui() {
                if (ImGui::CollapsingHeader("Point Lights")) {
                    if (ImGui::Button("Add Point Light"))
                        point.push_back(PointLight{});

                    ImGui::Text("Total point lights: %zu", point.size());

                    for (size_t i = 0; i < point.size(); ++i) {
                        ImGui::PushID(static_cast<int>(i));

                        ImGui::Text("Point Light %zu", i);
                        ImGui::DragFloat3("Position", &point[i].position.x, 0.1f);
                        ImGui::DragFloat("Distance", &point[i].dist, 1.0f, 0.0f, 10000.0f);
                        ImGui::ColorEdit3("Color", &point[i].color.x);

                        if (ImGui::Button("Remove")) {
                            point.erase(point.begin() + i);
                            --i;
                        }

                        ImGui::Separator();
                        ImGui::PopID();
                    }
                }

                if (ImGui::CollapsingHeader("Direct Light")) {
                    ImGui::DragFloat3("Direction", &direct.direction.x, 0.2f);
                    ImGui::ColorEdit3("Color", &direct.color.x);
                    ImGui::ColorEdit3("Ambient", &direct.ambient.x);
                }
            }

        private:
            StorageBuffer<PointLight> point_buffer;
            UniformBuffer<DirectLight> direct_buffer;
    };
} // namespace Engine