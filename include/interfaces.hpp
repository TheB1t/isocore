#pragma once

#include <render/shader.hpp>

class IBindable {
    public:
        virtual void bind(std::shared_ptr<ShaderProgram> shader) = 0;
};

class IDrawable {
    public:
        virtual void draw(std::shared_ptr<ShaderProgram> shader) = 0;
};

class IGuiDrawable {
    public:
        virtual void draw_gui() = 0;
};

class IUpdateble {
    public:
        virtual void update(float deltaTime) = 0;
};