#include <object/drawable_object.hpp>

DrawableObject::DrawableObject(std::string name, std::shared_ptr<Model> model) : name(name), model(model) {}

void DrawableObject::draw(std::shared_ptr<ShaderProgram> shader) {
    shader->set_uniform("model", AbstractObject::model);
    model->draw(shader);
}