#pragma once

#include <memory>

#include <window.hpp>
#include <event.hpp>
#include <log.hpp>

#include <camera.hpp>
#include <resource_manager.hpp>

#include <object/drawable.hpp>

#include <lighting/light.hpp>

#include <pass/pass.hpp>

using namespace Engine;

class App {
    public:
        App();

        void run();
        void stop();

    private:
        std::shared_ptr<Window> window;
        std::shared_ptr<Camera> camera;
        std::shared_ptr<Lighting> lighting;
        std::shared_ptr<RenderPipeline> render_pipeline;

        std::vector<std::shared_ptr<DrawableObject>> objects;

        void mainloop();

        void on_update(float deltaTime);
        void on_render();
        void on_gui();
};