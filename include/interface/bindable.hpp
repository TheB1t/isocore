#pragma once

#include <render/shader.hpp>

class IBindable {
    public:
        virtual void bind(std::shared_ptr<ShaderProgram> shader) = 0;
};