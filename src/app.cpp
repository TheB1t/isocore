#include <app.hpp>
#include <resource_manager.hpp>

App::App() {
    camera = std::make_shared<Camera>();

    window = std::make_shared<Window>("isocore", 640, 420);

    window->set_event_callback(
        [&](BaseEvent& event) {
            m_event_dispatcher.dispatch(event);
        }
    );

    m_event_dispatcher.add_event_listener<EventMouseMoved>(
        [&](EventMouseMoved& event)
        {
            if (window->get_mouse_mode() == Window::MouseMode::HIDDEN) {
                camera->process_mouse_movement(event.x, event.y, true);
            }
        });

    m_event_dispatcher.add_event_listener<EventKeyPressed>(
        [&](EventKeyPressed& event)
        {
            if (event.key_code == KeyCode::KEY_W)
                camera->direction.x = 1.0f;

            if (event.key_code == KeyCode::KEY_S)
                camera->direction.x = -1.0f;

            if (event.key_code == KeyCode::KEY_A)
                camera->direction.y = -1.0f;

            if (event.key_code == KeyCode::KEY_D)
                camera->direction.y = 1.0f;

            if (event.key_code == KeyCode::KEY_LEFT_SHIFT)
                camera->acceleration = true;

            if (event.key_code == KeyCode::KEY_G){
                if (window->get_mouse_mode() == Window::MouseMode::NORMAL) {
                    window->set_mouse_mode(Window::MouseMode::HIDDEN);
                } else {
                    window->set_mouse_mode(Window::MouseMode::NORMAL);
                }
            }
        });

    m_event_dispatcher.add_event_listener<EventKeyReleased>(
        [&](EventKeyReleased& event)
        {
            if (event.key_code == KeyCode::KEY_W)
                camera->direction.x = 0.0f;

            if (event.key_code == KeyCode::KEY_S)
                camera->direction.x = 0.0f;

            if (event.key_code == KeyCode::KEY_A)
                camera->direction.y = 0.0f;

            if (event.key_code == KeyCode::KEY_D)
                camera->direction.y = 0.0f;

            if (event.key_code == KeyCode::KEY_LEFT_SHIFT)
                camera->acceleration = false;
        });

    auto& rm = ResourceManager::get_instance();

    if (!rm.load_resources_from_folder(RESOURCES_PATH))
        LOG_FATAL("Failed to load resources");

    auto shader = rm.compile_shader_program("default_shader", {"default_vertex", "default_fragment"});
    shader->set_culling_mode(GL_BACK);
    shader->set_depth_mode(GL_LESS);

    auto model = rm.get<Model>(RESOURCES_PATH "objects/location/location.obj");
    auto object = std::make_shared<DrawableObject>("obj", model);
    // object->set_scale(glm::vec3(10.0f));
    objects.push_back(object);

    model = rm.get<Model>(RESOURCES_PATH "objects/sphere/pbr_sphere.obj");
    object = std::make_shared<DrawableObject>("sphere", model);
    object->set_position(glm::vec3(0.0f, 3.0f, 0.0f));
    objects.push_back(object);

}

void App::run() {
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glEnable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST);

    mainloop();
}

void App::stop() {
    window->close();
}

void App::mainloop() {
    LOG_INFO("Entering mainloop");

    auto& rm = ResourceManager::get_instance();

    auto shader = rm.get<ShaderProgram>("default_shader");

    camera->set_position(glm::vec3(-3.0f, 0.0f, 0.0f));

    while (!window->is_close()) {
        static double lastFrameTime = 0.0f;

        double currentFrame = glfwGetTime();
        double deltaTime = currentFrame - lastFrameTime;
        lastFrameTime = currentFrame;

        window->gui->NewFrame();

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

        ImGui::Begin("Debug Menu");
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

        static bool vsync = 1;
        ImGui::Checkbox("Vsync enabled", &vsync);
        glfwSwapInterval(vsync);

        camera->draw_gui();

        ImGui::End();

        shader->use();

        camera->update(deltaTime);
        camera->bind(shader);

        for (auto& object : objects)
            object->draw(shader);

        window->gui->Render();
        window->on_update();
    }

    LOG_INFO("Exiting mainloop");
}