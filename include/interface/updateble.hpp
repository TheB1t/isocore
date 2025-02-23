#pragma once

class IUpdateble {
    public:
        virtual void update(double deltaTime) = 0;
};