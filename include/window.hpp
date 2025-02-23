#pragma once

#include <string>
#include <memory>
#include <functional>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/ext/vector_float2.hpp>

#include <render/gui.hpp>

#include <event.hpp>

namespace Engine {

    class Window {
        public:
            static EventDispatcher g_event_dispatcher;

            std::unique_ptr<Gui> gui;

            enum MouseMode {
                NORMAL,
                HIDDEN,
            };

            using EventCallbackFn = std::function<void(BaseEvent&)>;

            Window(std::string title, const unsigned int width, const unsigned int height);
            ~Window();
            void on_update();
            bool is_close();
            void close();
            // void set_event_callback(const EventCallbackFn& callback) {
            //     m_data.eventCallbackFn = callback;
            // }

            unsigned int get_width() const { return m_data.width; }
            unsigned int get_height() const { return m_data.height; }
            glm::vec2 get_current_cursor_position();

            void set_mouse_mode(MouseMode mode);
            MouseMode get_mouse_mode() const { return m_data.mouseMode; }

        private:
            GLFWwindow* m_Window;
            struct WindowData {
                std::string title;
                unsigned int width;
                unsigned int height;
                EventCallbackFn eventCallbackFn;
                MouseMode mouseMode = NORMAL;
            };

            WindowData m_data;
    };
} // namespace Engine