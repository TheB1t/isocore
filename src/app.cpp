#include <app.hpp>
#include <resource_manager.hpp>

App::App() {
    window = std::make_shared<Window>("isocore", 1600, 900);

    Window::g_event_dispatcher.add_event_listener<EventMouseMoved>(
        [&](EventMouseMoved& event)
        {
            if (window->get_mouse_mode() == Window::MouseMode::HIDDEN) {
                camera->process_mouse_movement(event.x, event.y, true);
            }
        });

    Window::g_event_dispatcher.add_event_listener<EventKeyPressed>(
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

    Window::g_event_dispatcher.add_event_listener<EventKeyReleased>(
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

    camera = std::make_shared<Camera>();
    lighting = std::make_shared<Lighting>();
    render_pipeline = std::make_shared<RenderPipeline>();

    // rm.compile_program("default", "default", "default");
    rm.compile_program("geometry", "default", "geometry");
    rm.compile_program("light", "light", "light");

    render_pipeline->add_pass<GeometryPass>("geometry", "geometry", glm::ivec2(window->get_width(), window->get_height()));
    render_pipeline->add_pass<LightPass>("light", "light");
    // render_pipeline->add_pass<DefaultPass>("default", "default");

    // rm.set<Model>("QUAD", std::make_shared<Model>(StaticVars::QUAD));

    auto create_objects = [&](const std::string& name, Resource<Model> obj) {
        auto object = std::make_shared<DrawableObject>(name, obj);
        objects.push_back(object);
    };

    rm.for_each<Model>(create_objects);
}

void App::run() {
    // If enable this, G-Buffer will not work!!!
    // enable(EnableCap::eBlend);
    // blendFunc(BlendingFactor::eSrcAlpha, BlendingFactor::eOneMinusSrcAlpha);

    enable(EnableCap::eCullFace);
    enable(EnableCap::eDepthTest);

    mainloop();
}

void App::stop() {
    window->close();
}

void App::on_update(float deltaTime) {
    lighting->update();
    camera->update(deltaTime);
}

void App::on_render() {
    auto setup = [&](std::shared_ptr<ogl::Program> shader) {
        lighting->bind(shader);
        camera->bind(shader);
    };

    auto execute = [&](std::shared_ptr<ogl::Program> shader) {
        for (auto& object : objects)
            object->draw(shader);
    };

    render_pipeline->execute(setup, execute);
}

void App::on_gui() {
    ImGui::Begin("Debug Menu");
    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", ImGui::GetIO().DeltaTime * 1000, ImGui::GetIO().Framerate);

    static bool vsync = 1;
    ImGui::Checkbox("Vsync enabled", &vsync);
    glfwSwapInterval(vsync);

    static int current_tab = 0;
    static std::shared_ptr<DrawableObject> selected_object = objects[0];

    const char* tabs[] = { "Objects", "Camera", "Lighting" };

    if (ImGui::BeginTabBar("##tabs")) {
        for (int i = 0; i < IM_ARRAYSIZE(tabs); i++) {
            if (ImGui::BeginTabItem(tabs[i])) {
                current_tab = i;
                ImGui::EndTabItem();
            }
        }
        ImGui::EndTabBar();
    };

    if (current_tab == 0) {
        if (ImGui::BeginCombo("##objects", selected_object ? selected_object->name.c_str() : "Not selected", ImGuiComboFlags_NoArrowButton)) {
            for (auto& object : objects) {
                if (ImGui::Selectable(object->name.c_str())) {
                    selected_object = object;
                }
            }
            ImGui::EndCombo();
        }

        if (selected_object)
            selected_object->draw_gui();
    }

    if (current_tab == 1)
        camera->draw_gui();

    if (current_tab == 2)
        lighting->draw_gui();

    ImGui::End();
}

void App::mainloop() {
    LOG_INFO("Entering mainloop");

    auto& rm = ResourceManager::get_instance();

    camera->position = glm::vec3(-3.0f, 0.0f, 0.0f);

    while (!window->is_close()) {
        double deltaTime = ImGui::GetIO().DeltaTime * 1000;
        on_update(deltaTime);

        on_render();

        window->gui->NewFrame();
        on_gui();
        window->gui->Render();
        window->on_update();
    }

    LOG_INFO("Exiting mainloop");
}