#pragma once

#include <render/shader.hpp>

class IDrawable {
    public:
        virtual void draw(std::shared_ptr<ShaderProgram> shader) = 0;
}; 