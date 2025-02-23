#pragma once

#include <memory>

#include <window.hpp>
#include <event.hpp>
#include <log.hpp>

#include <camera.hpp>
#include <resource_manager.hpp>

#include <object/drawable_object.hpp>

class App {
    public:
        App();

        void run();
        void stop();

    private:
        std::shared_ptr<Window> window;
        std::shared_ptr<Camera> camera;

        std::vector<std::shared_ptr<DrawableObject>> objects;

        EventDispatcher m_event_dispatcher;

        void mainloop();
};