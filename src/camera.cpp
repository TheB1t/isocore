#include <camera.hpp>

namespace Engine {

    Camera::Camera(float aspect_ratio, float yfov, float znear, float zfar, Type_t type)
        : type(type), zfar(zfar), znear(znear), aspect_ratio(aspect_ratio), yfov(yfov) {
        update_camera();
    }

    void Camera::update_camera() {
        front.x = cos(rotation.y) * cos(rotation.x);
        front.y = sin(rotation.x);
        front.z = sin(rotation.y) * cos(rotation.x);
        front = glm::normalize(front);

        right   = glm::normalize(glm::cross(front, WORLD_UP));
        up      = glm::normalize(glm::cross(right, front));

        view = glm::lookAt(position, position + front, up);

        if (type == Type_t::PERSPECTIVE)
            projection = glm::perspective(yfov, aspect_ratio, znear, zfar);
        else if (type == Type_t::ORTHOGRAPHIC)
            LOG_FATAL("Orthographic camera not implemented yet");
    }

    void Camera::update(float deltaTime) {
        float speed = acceleration ? movement_speed * 10.0f : movement_speed;

        glm::vec3 dvec = direction * speed * deltaTime;

        if (std::isnan(dvec.x) || std::isnan(dvec.y) || std::isnan(dvec.z))
            throw std::runtime_error("NAN");

        position += front   * dvec.x;
        position += right   * dvec.y;
        position += up      * dvec.z;

        update_camera();
    }

    void Camera::process_mouse_movement(float xoffset, float yoffset, GLboolean constrainpitch) {
        xoffset *= mouse_sensitivity;
        yoffset *= mouse_sensitivity;

        rotation.x -= yoffset;
        rotation.y += xoffset;

        if (constrainpitch) {
            const float pitch_limit = glm::radians(89.0f);
            if (rotation.x > pitch_limit)
                rotation.x = pitch_limit;
            if (rotation.x < -pitch_limit)
                rotation.x = -pitch_limit;
        }

        update_camera();
    }

    void Camera::process_mouse_scroll(float yoffset){
        yfov -= (float)yoffset;

        if (yfov > glm::radians(120.0f))
            yfov = glm::radians(120.0f);
        if (yfov < glm::radians(10.0f))
            yfov = glm::radians(10.0f);
    }

    void Camera::bind(std::shared_ptr<ogl::Program> shader) {
        shader->set_uniform("view", view);
        shader->set_uniform("projection", projection);
        shader->set_uniform("viewPos", position);
    }

    void Camera::draw_gui() {
        float fov = glm::degrees(yfov);

        ImGui::Text("Camera Position: %s", Utils::glm_to_string(position).c_str());
        ImGui::Text("Camera Front: %s", Utils::glm_to_string(front).c_str());
        ImGui::Text("Camera Right: %s", Utils::glm_to_string(right).c_str());
        ImGui::Text("Camera Up: %s", Utils::glm_to_string(up).c_str());

        ImGui::SliderFloat("##camspeed", &movement_speed, 0.0f, 500.0f, "Speed %.3f units");
        ImGui::SliderFloat("##camfov", &fov, 10.0f, 120.0f, "FOV %.3f°");
        ImGui::SliderFloat("##camsens", &mouse_sensitivity, 0.0f, 0.1f, "Sensivity %.3f");
        ImGui::SliderFloat("##aspectRatio", &aspect_ratio, 0.1f, 5.0f, "Aspect ratio %.3f");

        yfov = glm::radians(fov);
    }
} // namespace Engine