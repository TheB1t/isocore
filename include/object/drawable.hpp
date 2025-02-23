#pragma once

#include <memory>

#include <render/model.hpp>

#include <interfaces.hpp>
#include <object/abstract.hpp>

namespace Engine {
    class DrawableObject : public AbstractObject, public IDrawable {
        public:
            const std::string name;

            DrawableObject(std::string name, std::shared_ptr<Model> model)
                : name(name), model(model) {}

            void draw(std::shared_ptr<ogl::Program> shader) override {
                auto model_matrix = get_model();

                shader->set_uniform("model", model_matrix);
                model->draw();
            }

            void draw_gui() override {
                ImGui::Text("Name: %s", name.c_str());
                AbstractObject::draw_gui();
            }

        protected:
            std::shared_ptr<Model> model;
    };
} // namespace Engine