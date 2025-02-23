#pragma once

#include <ogl/ogl.hpp>

#include <resource_manager.hpp>
#include <interfaces.hpp>

#include <camera.hpp>
#include <lighting/light.hpp>
#include <render/buffer.hpp>
#include <render/texture.hpp>
#include <registry.hpp>

#include <event.hpp>

namespace Engine {

    using RenderContext = Registry<
        Texture,
        FrameBuffer
    >;

    template<typename T>
    using ContextElement = RegistryElement<T>;

    template<typename T>
    using ContextElementMap = RegistryElementMap<T>;

    using RenderUserHandler = std::function<void(std::shared_ptr<ogl::Program>)>;

    class RenderPass {
        public:
            RenderPass(const std::string& shader_name) {
                shader = ResourceManager::get_instance().get<ogl::Program>(shader_name);
                if (!shader)
                    LOG_FATAL("Failed to find shader program: %s", shader_name.c_str());
            }

            virtual ~RenderPass() = default;

            virtual void setup(RenderContext& ctx) = 0;
            virtual void execute(RenderContext& ctx, RenderUserHandler setup, RenderUserHandler execute) = 0;
            virtual void teardown(RenderContext& ctx) = 0;

            void set_state(GLenum flag, bool enable) {
                render_states[flag] = enable;
            }

            void apply_render_states() {
                for(const auto& [flag, enable] : render_states) {
                    if(enable)  glEnable(flag);
                    else        glDisable(flag);
                }

                cullFace(cull_face);
                depthFunc(depth_test);
            }

        protected:
            std::unordered_map<GLenum, bool> render_states;
            std::shared_ptr<ogl::Program> shader;

            TriangleFace cull_face      = TriangleFace::eFrontAndBack;
            DepthFunction depth_test    = DepthFunction::eLess;
    };

    class RenderPipeline {
        public:
            template<typename T, typename... Args>
            void add_pass(const std::string& name, Args&&... args) {
                static_assert(std::is_base_of<RenderPass, T>::value, "T must be a subclass of RenderPass");
                auto pass = std::make_shared<T>(std::forward<Args>(args)...);
                pass->setup(ctx);
                passes[name] = pass;
            }

            void execute(RenderUserHandler setup, RenderUserHandler execute) {
                for (const auto& [name, pass] : passes) {
                    pass->execute(ctx, setup, execute);
                    pass->teardown(ctx);
                }
            }

        private:
            std::map<std::string, std::shared_ptr<RenderPass>> passes;

            RenderContext ctx;
    };

    class DefaultPass : public RenderPass {
        public:
            DefaultPass(const std::string& shader_name) : RenderPass(shader_name) {
                cull_face = TriangleFace::eBack;
                depth_test = DepthFunction::eLess;

                shader->bind_uniform_block("Material", 0);
                shader->bind_storage_block("PointLights", 1);
                shader->bind_uniform_block("DirectLight", 2);
            }

            void setup(RenderContext& ctx) override {

            }

            void execute(RenderContext& ctx, RenderUserHandler setup, RenderUserHandler execute) override {
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

                shader->use();
                apply_render_states();

                setup(shader);
                execute(shader);
            }

            void teardown(RenderContext& ctx) override {

            }
    };

    class GeometryPass : public RenderPass {
        public:
            GeometryPass(const std::string& shader_name, glm::ivec2 size)
                : RenderPass(shader_name)
            {
                gBuffer = std::make_shared<FrameBuffer>();
                gPosition = std::make_shared<Texture>(TextureTarget::eTexture2d, InternalFormat::eRgb16f, PixelFormat::eRgb, PixelType::eFloat);
                gNormal = std::make_shared<Texture>(TextureTarget::eTexture2d, InternalFormat::eRgb16f, PixelFormat::eRgb, PixelType::eFloat);
                gAlbedo = std::make_shared<Texture>(TextureTarget::eTexture2d, InternalFormat::eRgba, PixelFormat::eRgba, PixelType::eUnsignedByte);
                gRBuffer = std::make_shared<RenderBuffer>();
                gRBuffer->resize(size);

                gPosition->bind();
                gPosition->set_data(nullptr);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMinFilter, (GLenum)TextureMinFilter::eNearest);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMagFilter, (GLenum)TextureMagFilter::eNearest);

                gNormal->bind();
                gNormal->set_data(nullptr);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMinFilter, (GLenum)TextureMinFilter::eNearest);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMagFilter, (GLenum)TextureMagFilter::eNearest);

                gAlbedo->bind();
                gAlbedo->set_data(nullptr);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMinFilter, (GLenum)TextureMinFilter::eNearest);
                texParameteri(TextureTarget::eTexture2d, TextureParameterName::eTextureMagFilter, (GLenum)TextureMagFilter::eNearest);


                gBuffer->bind(FramebufferTarget::eFramebuffer);
                gBuffer->bind_obj(gPosition, FramebufferAttachment::eColorAttachment0);
                gBuffer->bind_obj(gNormal, FramebufferAttachment::eColorAttachment1);
                gBuffer->bind_obj(gAlbedo, FramebufferAttachment::eColorAttachment2);
                gBuffer->bind_obj(gRBuffer, FramebufferAttachment::eDepthAttachment);
                gBuffer->resize(size);

                unsigned int attachments[3] = { GL_COLOR_ATTACHMENT0, GL_COLOR_ATTACHMENT1, GL_COLOR_ATTACHMENT2 };
                glDrawBuffers(3, attachments);

                if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
                    LOG_FATAL("Framebuffer is not complete!");

                gBuffer->unbind(FramebufferTarget::eFramebuffer);

                cull_face = TriangleFace::eBack;
                depth_test = DepthFunction::eLess;

                shader->set_uniform("tDiffuse", 0);
                shader->set_uniform("tSpecular", 1);
                shader->set_uniform("tNormal", 2);
            }

            void setup(RenderContext& ctx) override {
                ctx.set<Texture>("gPosition", gPosition);
                ctx.set<Texture>("gNormal", gNormal);
                ctx.set<Texture>("gAlbedo", gAlbedo);
                ctx.set<FrameBuffer>("gBuffer", gBuffer);
            }

            void execute(RenderContext& ctx, RenderUserHandler setup, RenderUserHandler execute) override {
                gBuffer->bind(FramebufferTarget::eFramebuffer);

                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

                shader->use();
                apply_render_states();

                setup(shader);
                execute(shader);
            }

            void teardown(RenderContext& ctx) override {
                // gPosition->save<float>("gPosition");
                // gNormal->save<float>("gNormal");
                // gAlbedo->save<char>("gAlbedo");

                gBuffer->unbind(FramebufferTarget::eFramebuffer);
            }

        private:
            ContextElement<FrameBuffer> gBuffer;
            ContextElement<RenderBuffer> gRBuffer;

            ContextElement<Texture> gPosition;
            ContextElement<Texture> gNormal;
            ContextElement<Texture> gAlbedo;
    };

    class LightPass : public RenderPass {
        public:
            LightPass(const std::string& shader_name) : RenderPass(shader_name) {
                // model = Model::generate_primitive_object(0);

                cull_face = TriangleFace::eBack;
                depth_test = DepthFunction::eLess;

                shader->bind_uniform_block("Material", 0);
                shader->bind_storage_block("PointLights", 1);
                shader->bind_uniform_block("DirectLight", 2);
            }

            void setup(RenderContext& ctx) override {

            }

            void execute(RenderContext& ctx, RenderUserHandler setup, RenderUserHandler execute) override {
                clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

                shader->use();
                apply_render_states();

                ctx.get<Texture>("gPosition")->use(TextureUnit::eTexture0);
                ctx.get<Texture>("gNormal")->use(TextureUnit::eTexture1);
                ctx.get<Texture>("gAlbedo")->use(TextureUnit::eTexture2);

                shader->set_uniform("gPosition", 0);
                shader->set_uniform("gNormal", 1);
                shader->set_uniform("gAlbedo", 2);
                // execute(shader);
                setup(shader);
                renderQuad();
                // model->draw();

                auto gBuffer = ctx.get<FrameBuffer>("gBuffer");
                auto size = gBuffer->get_size();

                gBuffer->bind(FramebufferTarget::eReadFramebuffer);
                gBuffer->unbind(FramebufferTarget::eDrawFramebuffer);
                blitFramebuffer(0, 0, size.x, size.y, 0, 0, size.x, size.y, GL_DEPTH_BUFFER_BIT, BlitFramebufferFilter::eNearest);
                gBuffer->unbind(FramebufferTarget::eFramebuffer);
            }

            void teardown(RenderContext& ctx) override {

            }

            void renderQuad() {
                static unsigned int quadVAO = 0;
                static unsigned int quadVBO = 0;

                if (quadVAO == 0) {
                    float quadVertices[] = {
                        // positions        // texture Coords
                        -1.0f,  1.0f, 0.0f, 0.0f, 1.0f,
                        -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,
                        1.0f,  1.0f, 0.0f, 1.0f, 1.0f,
                        1.0f, -1.0f, 0.0f, 1.0f, 0.0f,
                    };
                    // setup plane VAO
                    glGenVertexArrays(1, &quadVAO);
                    glGenBuffers(1, &quadVBO);
                    glBindVertexArray(quadVAO);
                    glBindBuffer(GL_ARRAY_BUFFER, quadVBO);
                    glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), &quadVertices, GL_STATIC_DRAW);
                    glEnableVertexAttribArray(0);
                    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
                    glEnableVertexAttribArray(1);
                    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
                }
                glBindVertexArray(quadVAO);
                glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
            }

        private:
            std::shared_ptr<Model> model;
    };
} // namespace Engine