#pragma once

#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>
#include <GLFW/glfw3.h>

class Gui {
    public:
        Gui();
        ~Gui();

        void init(GLFWwindow* window);

        void NewFrame();
        void Render();
};