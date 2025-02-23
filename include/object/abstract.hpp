#pragma once

#define GLM_ENABLE_EXPERIMENTAL

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <interfaces.hpp>

class AbstractObject : public IGuiDrawable {
    public:
        AbstractObject() {
            position = glm::vec3(0.0f);
            rotation = glm::quat(glm::vec3(0.0f));
            scale    = glm::vec3(1.0f);

            update_model();
        }

        glm::vec3 position;
        glm::quat rotation;
        glm::vec3 scale;

        glm::mat4& get_model() {
            update_model();
            return model;
        }

        void draw_gui() override {
            ImGui::DragFloat3("Position", &position.x, 0.05f);
            ImGui::DragFloat4("Rotation", &rotation.x, 0.05f);
            ImGui::DragFloat3("Scale", &scale.x, 0.05f);
        }

    protected:
        void update_model() {
            model = glm::mat4(1.0f);

            glm::vec3 rot = glm::eulerAngles(rotation);

            model = glm::translate(model, position);
            model = glm::rotate(model, rot.x, glm::vec3(1.0f, 0.0f, 0.0f));
            model = glm::rotate(model, rot.y, glm::vec3(0.0f, 1.0f, 0.0f));
            model = glm::rotate(model, rot.z, glm::vec3(0.0f, 0.0f, 1.0f));
            model = glm::scale(model, scale);
        }

    private:
        glm::mat4 model;
};