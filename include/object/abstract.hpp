#pragma once

#define GLM_ENABLE_EXPERIMENTAL

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <interfaces.hpp>

namespace Engine {

    class AbstractObject : public IGuiDrawable {
        public:
            AbstractObject() {
                position = glm::vec3(0.0f);
                rotation = glm::quat(glm::vec3(0.0f));
                scale    = glm::vec3(1.0f);
            }

            glm::vec3 position;
            glm::quat rotation;
            glm::vec3 scale;

            glm::mat4 get_model() {
                glm::mat4 model = glm::mat4(1.0f);

                glm::vec3 rot = glm::eulerAngles(rotation);

                model = glm::translate(model, position);
                model = glm::rotate(model, rot.x, glm::vec3(1.0f, 0.0f, 0.0f));
                model = glm::rotate(model, rot.y, glm::vec3(0.0f, 1.0f, 0.0f));
                model = glm::rotate(model, rot.z, glm::vec3(0.0f, 0.0f, 1.0f));
                model = glm::scale(model, scale);

                return model;
            }

            void draw_gui() override {
                static float speed = 0.05f;
                ImGui::SliderFloat("Speed", &speed, 0.01f, 100.0f);
                ImGui::DragFloat3("Position", &position.x, speed);
                ImGui::DragFloat4("Rotation", &rotation.x, speed);
                ImGui::DragFloat3("Scale", &scale.x, speed);
            }
    };
} // namespace Engine