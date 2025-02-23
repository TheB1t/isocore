#pragma once

#define GLM_ENABLE_EXPERIMENTAL

#include <ogl/ogl.hpp>

#include <window.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <resource_manager.hpp>
#include <interfaces.hpp>
#include <object/abstract.hpp>

#include <utils.hpp>

namespace Engine {

    class Camera : public AbstractObject, public IBindable, public IUpdateble {
        public:
            const float SPEED       =  0.1f;
            const float SENSITIVITY =  0.01f;

            const glm::vec3 WORLD_FRONT = glm::vec3(0.0f, 0.0f, -1.0f);
            const glm::vec3 WORLD_UP    = glm::vec3(0.0f, 1.0f,  0.0f);
            const glm::vec3 WORLD_RIGHT = glm::vec3(1.0f, 0.0f,  0.0f);

            typedef enum {
                PERSPECTIVE,
                ORTHOGRAPHIC
            } Type_t;

            glm::vec3 direction = glm::vec3(0.0f);
            bool acceleration = false;

            Camera(float aspect_ratio = 16.0f / 9.0f, float yfov = glm::radians(90.0f), float znear = 0.01f, float zfar = 10000.0f, Type_t type = PERSPECTIVE);

            void process_mouse_movement(float xoffset, float yoffset, GLboolean constrainpitch = true);
            void process_mouse_scroll(float yoffset);

            void bind(std::shared_ptr<ogl::Program> shader) override;
            void update(float deltaTime) override;
            void draw_gui() override;

        private:
            Type_t type;

            float zfar;
            float znear;

            float movement_speed        = SPEED;
            float mouse_sensitivity     = SENSITIVITY;
            float yfov;
            float aspect_ratio;

            glm::vec3 front;
            glm::vec3 up;
            glm::vec3 right;

            glm::mat4 view          = glm::mat4(1.0f);
            glm::mat4 projection    = glm::mat4(1.0f);

            void update_camera();
    };
} // namespace Engine