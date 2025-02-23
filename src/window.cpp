#include <window.hpp>
#include <log.hpp>

namespace Engine {

    EventDispatcher Window::g_event_dispatcher;

    const char* glDebugSourceToString(GLenum source) {
        switch (source) {
            case GL_DEBUG_SOURCE_API:             return "API";
            case GL_DEBUG_SOURCE_WINDOW_SYSTEM:   return "Window System";
            case GL_DEBUG_SOURCE_SHADER_COMPILER: return "Shader Compiler";
            case GL_DEBUG_SOURCE_THIRD_PARTY:     return "Third Party";
            case GL_DEBUG_SOURCE_APPLICATION:     return "Application";
            case GL_DEBUG_SOURCE_OTHER:           return "Other";
        }

        return "Unknown";
    }

    const char* glDebugTypeToString(GLenum type) {
        switch (type) {
            case GL_DEBUG_TYPE_ERROR:               return "Error";
            case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR: return "Deprecated Behaviour";
            case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:  return "Undefined Behaviour";
            case GL_DEBUG_TYPE_PORTABILITY:         return "Portability";
            case GL_DEBUG_TYPE_PERFORMANCE:         return "Performance";
            case GL_DEBUG_TYPE_OTHER:               return "Other";
        }
        return "Unknown";
    }

    const char* glDebugSeverityToString(GLenum severity) {
        switch (severity) {
            case GL_DEBUG_SEVERITY_HIGH:         return "High";
            case GL_DEBUG_SEVERITY_MEDIUM:       return "Medium";
            case GL_DEBUG_SEVERITY_LOW:          return "Low";
            case GL_DEBUG_SEVERITY_NOTIFICATION: return "Notification";
        }
        return "Unknown";
    }

    void APIENTRY glDebugOutput(GLenum source, GLenum type, unsigned int id, GLenum severity, GLsizei length, const char *message, const void *userParam) {
        // // ignore non-significant error/warning codes
        // if(id == 131169 || id == 131185 || id == 131218 || id == 131204)
        //     return;

        std::string msg = tfm::format("[%d, %s, %s, %s]: %s", id, glDebugSourceToString(source), glDebugTypeToString(type), glDebugSeverityToString(severity), message);

        if (severity == GL_DEBUG_SEVERITY_NOTIFICATION) {
            LOG_INFO("%s", msg);
        } else {
            LOG_ERR("%s", msg);
        }
    }

    const char* glfwPlatformToString(GLint platform) {
        switch (platform) {
            case GLFW_PLATFORM_WIN32:       return "Win32";
            case GLFW_PLATFORM_COCOA:       return "Cocoa";
            case GLFW_PLATFORM_WAYLAND:     return "Wayland";
            case GLFW_PLATFORM_X11:         return "X11";
            case GLFW_PLATFORM_ERROR:       return "Error";
            case GLFW_PLATFORM_UNAVAILABLE: return "Unavailable";
        }

        return "Unknown";
    }

    void glfwErrorCallback(int, const char* err_str) {
        LOG_ERR("GLFW Error: %s", err_str);
    }

    Window::Window(std::string title, const unsigned int width, const unsigned int height) : m_data({ std::move(title), width, height }), gui(std::make_unique<Gui>()) {
        glfwSetErrorCallback(glfwErrorCallback);

        if (!glfwInit()) {
            LOG_CRIT("glfwInit() failed");
            exit(1);
        }

        LOG_INFO("Platform: %s", glfwPlatformToString(glfwGetPlatform()));

    #if defined(GLFW_DEBUG_CONTEXT)
        glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, true);
    #endif

        m_Window = glfwCreateWindow(m_data.width, m_data.height, m_data.title.c_str(), NULL, NULL);
        if (!m_Window) {
            LOG_INFO("glfwCreateWindow() failed");
            glfwTerminate();
            exit(1);
        }

        glfwMakeContextCurrent(m_Window);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
            LOG_CRIT("gladLoadGLLoader() failed");
            exit(1);
        }

        LOG_INFO("OpenGL Version: %s", glGetString(GL_VERSION));
        LOG_INFO("OpenGL Vendor: %s", glGetString(GL_VENDOR));
        LOG_INFO("OpenGL Renderer: %s", glGetString(GL_RENDERER));
        LOG_INFO("OpenGL Shading Language Version: %s", glGetString(GL_SHADING_LANGUAGE_VERSION));

        int flags;
        glGetIntegerv(GL_CONTEXT_FLAGS, &flags);
        if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) {
            glEnable(GL_DEBUG_OUTPUT);
            glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
            glDebugMessageCallback(glDebugOutput, nullptr);
            glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0, nullptr, GL_TRUE);
        }

        glfwSetWindowUserPointer(m_Window, &m_data);

        glfwSetKeyCallback(m_Window,
            [](GLFWwindow* pWindow, int key, int scancode, int action, int mods) {
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));
                switch (action) {
                    case GLFW_PRESS: {
                        EventKeyPressed event(static_cast<KeyCode>(key), false);
                        data.eventCallbackFn(event);
                        break;
                    }
                    case GLFW_RELEASE: {
                        EventKeyReleased event(static_cast<KeyCode>(key));
                        data.eventCallbackFn(event);
                        break;
                    }
                    // case GLFW_REPEAT: {
                    //     EventKeyPressed event(static_cast<KeyCode>(key), true);
                    //     data.eventCallbackFn(event);
                    //     break;
                    // }
                }
            }
        );

        glfwSetMouseButtonCallback(m_Window,
            [](GLFWwindow* pWindow, int button, int action, int mods) {
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));
                double x_pos;
                double y_pos;
                glfwGetCursorPos(pWindow, &x_pos, &y_pos);
                switch (action) {
                    case GLFW_PRESS: {
                        EventMouseButtonPressed event(static_cast<MouseButton>(button), x_pos, y_pos);
                        data.eventCallbackFn(event);
                        break;
                    }
                    case GLFW_RELEASE: {
                        EventMouseButtonReleased event(static_cast<MouseButton>(button), x_pos, y_pos);
                        data.eventCallbackFn(event);
                        break;
                    }
                }
            }
        );

        glfwSetWindowSizeCallback(m_Window,
            [](GLFWwindow* pWindow, int width, int height) {
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));
                data.width = width;
                data.height = height;
                EventWindowResize event(width, height);
                data.eventCallbackFn(event);
            }
        );

        glfwSetCursorPosCallback(m_Window,
            [](GLFWwindow* pWindow, double x, double y) {
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));

                static double last_x = 0;
                static double last_y = 0;

                double dx = x - last_x;
                double dy = y - last_y;

                EventMouseMoved event(dx, dy);
                data.eventCallbackFn(event);

                if (data.mouseMode == HIDDEN) {
                    int width, height;
                    glfwGetWindowSize(pWindow, &width, &height);
                    glfwSetCursorPos(pWindow, width / 2, height / 2);

                    last_x = width / 2;
                    last_y = height / 2;
                } else {
                    last_x = x;
                    last_y = y;
                }
            }
        );

        glfwSetWindowCloseCallback(m_Window,
            [](GLFWwindow* pWindow) {
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));
                EventWindowClose event;
                data.eventCallbackFn(event);
            }
        );

        glfwSetFramebufferSizeCallback(m_Window,
            [](GLFWwindow* pWindow, int width, int height) {
                // LOG_INFO("Resize: %d, %d", width, height);
                WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(pWindow));
                data.width = width;
                data.height = height;
                glViewport(0, 0, width, height);
                EventWindowResize event(width, height);
                data.eventCallbackFn(event);
            }
        );

        m_data.eventCallbackFn = [](BaseEvent& e) {
            Window::g_event_dispatcher.dispatch(e);
        };

        gui->init(m_Window);
    }

    Window::~Window() {
        LOG_INFO("Terminate GLFW");
        gui = nullptr;
        glfwDestroyWindow(m_Window);
        glfwTerminate();
    }

    void Window::on_update() {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }

    bool Window::is_close() {
        return glfwWindowShouldClose(m_Window);
    }

    void Window::close() {
        glfwSetWindowShouldClose(m_Window, GLFW_TRUE);
    }

    glm::vec2 Window::get_current_cursor_position() {
        double x_pos;
        double y_pos;
        glfwGetCursorPos(m_Window, &x_pos, &y_pos);
        return {x_pos, y_pos};
    }

    void Window::set_mouse_mode(MouseMode mode) {
        m_data.mouseMode = mode;
        switch (m_data.mouseMode) {
            case NORMAL: {
                glfwSetInputMode(m_Window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
                break;
            }
            case HIDDEN: {
                glfwSetInputMode(m_Window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
                break;
            }
        }
    }
} // namespace Engine