#pragma once

#include <memory>

#include <render/model.hpp>

#include <interface/drawable.hpp>
#include <object/abstract_object.hpp>

class DrawableObject : public AbstractObject, public IDrawable {
    public:
        DrawableObject(std::string name, std::shared_ptr<Model> model);

        void draw(std::shared_ptr<ShaderProgram> shader) override;

        std::string get_name();

    protected:
        std::string name;
        std::shared_ptr<Model> model;
};