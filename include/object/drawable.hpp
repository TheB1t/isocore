#pragma once

#include <memory>

#include <render/model.hpp>

#include <interfaces.hpp>
#include <object/abstract.hpp>

class DrawableObject : public AbstractObject, public IDrawable {
    public:
        const std::string name;

        DrawableObject(std::string name, std::shared_ptr<Model> model)
            : name(name), model(model) {}

        void draw(std::shared_ptr<ShaderProgram> shader) override {
            auto model_matrix = get_model();

            shader->set_uniform("model", model_matrix);
            shader->set_uniform("normalMatrix", glm::transpose(glm::inverse(model_matrix)));
            model->draw(shader);
        }

        void draw_gui() override {
            ImGui::Text("Name: %s", name.c_str());
            AbstractObject::draw_gui();
        }

    protected:
        std::shared_ptr<Model> model;
};