#pragma once

#include <type_traits>
#include <vector>

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <glad/glad.h>

#include <ogl/enums.hpp>
#include <ogl/funcs.hpp>

namespace ogl {
namespace Uniform {
using namespace funcs;

    template<typename T>
    struct is_glm_vec : std::false_type {};

    template<glm::length_t L, typename T, glm::qualifier Q>
    struct is_glm_vec<glm::vec<L, T, Q>> : std::true_type {};

    template<typename T>
    struct is_glm_mat : std::false_type {};

    template<glm::length_t C, glm::length_t R, typename T, glm::qualifier Q>
    struct is_glm_mat<glm::mat<C, R, T, Q>> : std::true_type {};

    template<typename T>
    std::enable_if_t<std::is_arithmetic_v<T>>
    set(GLint location, T value) {
        if constexpr (std::is_same_v<T, float>) {
            uniform1f(location, value);
        } else if constexpr (std::is_same_v<T, int>) {
            uniform1i(location, value);
        } else if constexpr (std::is_same_v<T, uint>) {
            uniform1ui(location, value);
        }
    }

    template<typename T>
    std::enable_if_t<is_glm_vec<T>::value>
    set(GLint location, const T& vec) {
        using Component = typename T::value_type;
        constexpr glm::length_t L = T::length();
        const Component* ptr = glm::value_ptr(vec);

        if constexpr (std::is_same_v<Component, float>) {
            if constexpr (L == 1) uniform1fv(location, 1, ptr);
            else if constexpr (L == 2) uniform2fv(location, 1, ptr);
            else if constexpr (L == 3) uniform3fv(location, 1, ptr);
            else if constexpr (L == 4) uniform4fv(location, 1, ptr);
        } else if constexpr (std::is_same_v<Component, int>) {
            if constexpr (L == 1) uniform1iv(location, 1, ptr);
            else if constexpr (L == 2) uniform2iv(location, 1, ptr);
            else if constexpr (L == 3) uniform3iv(location, 1, ptr);
            else if constexpr (L == 4) uniform4iv(location, 1, ptr);
        } else if constexpr (std::is_same_v<Component, uint>) {
            if constexpr (L == 1) uniform1uiv(location, 1, ptr);
            else if constexpr (L == 2) uniform2uiv(location, 1, ptr);
            else if constexpr (L == 3) uniform3uiv(location, 1, ptr);
            else if constexpr (L == 4) uniform4uiv(location, 1, ptr);
        }
    }

    template<typename T>
    std::enable_if_t<is_glm_mat<T>::value>
    set(GLint location, const T& matrix, GLboolean transpose = GL_FALSE) {
        using Component = typename T::value_type;
        constexpr glm::length_t cols = T::col_type::length();
        constexpr glm::length_t rows = T::row_type::length();
        const Component* ptr = glm::value_ptr(matrix);

        if constexpr (std::is_same_v<Component, float>) {
            if constexpr (cols == 2 && rows == 2) uniformMatrix2fv(location, 1, transpose, ptr);
            else if constexpr (cols == 3 && rows == 3) uniformMatrix3fv(location, 1, transpose, ptr);
            else if constexpr (cols == 4 && rows == 4) uniformMatrix4fv(location, 1, transpose, ptr);
            else if constexpr (cols == 2 && rows == 3) uniformMatrix2x3fv(location, 1, transpose, ptr);
            else if constexpr (cols == 3 && rows == 2) uniformMatrix3x2fv(location, 1, transpose, ptr);
            else if constexpr (cols == 2 && rows == 4) uniformMatrix2x4fv(location, 1, transpose, ptr);
            else if constexpr (cols == 4 && rows == 2) uniformMatrix4x2fv(location, 1, transpose, ptr);
            else if constexpr (cols == 3 && rows == 4) uniformMatrix3x4fv(location, 1, transpose, ptr);
            else if constexpr (cols == 4 && rows == 3) uniformMatrix4x3fv(location, 1, transpose, ptr);
        }
    }

    template<typename T>
    void set(GLint location, const std::vector<T>& values) {
        if constexpr (is_glm_vec<T>::value) {
            using Component = typename T::value_type;
            constexpr glm::length_t L = T::length();
            const Component* ptr = glm::value_ptr(values.front());
            GLsizei count = static_cast<GLsizei>(values.size());

            if constexpr (std::is_same_v<Component, float>) {
                if constexpr (L == 1) uniform1fv(location, count, ptr);
                else if constexpr (L == 2) uniform2fv(location, count, ptr);
                else if constexpr (L == 3) uniform3fv(location, count, ptr);
                else if constexpr (L == 4) uniform4fv(location, count, ptr);
            } else if constexpr (std::is_same_v<Component, int>) {
                if constexpr (L == 1) uniform1iv(location, count, ptr);
                else if constexpr (L == 2) uniform2iv(location, count, ptr);
                else if constexpr (L == 3) uniform3iv(location, count, ptr);
                else if constexpr (L == 4) uniform4iv(location, count, ptr);
            } else if constexpr (std::is_same_v<Component, uint>) {
                if constexpr (L == 1) uniform1uiv(location, count, ptr);
                else if constexpr (L == 2) uniform2uiv(location, count, ptr);
                else if constexpr (L == 3) uniform3uiv(location, count, ptr);
                else if constexpr (L == 4) uniform4uiv(location, count, ptr);
            }
        }
    }

    template<typename T>
    void set(GLint location, const std::vector<T>& matrices, GLboolean transpose = GL_FALSE) {
        if constexpr (is_glm_mat<T>::value) {
            using Component = typename T::value_type;
            constexpr glm::length_t cols = T::col_type::length();
            constexpr glm::length_t rows = T::row_type::length();
            const Component* ptr = glm::value_ptr(matrices.front());
            GLsizei count = static_cast<GLsizei>(matrices.size());

            if constexpr (std::is_same_v<Component, float>) {
                if constexpr (cols == 2 && rows == 2) uniformMatrix2fv(location, count, transpose, ptr);
                else if constexpr (cols == 3 && rows == 3) uniformMatrix3fv(location, count, transpose, ptr);
                else if constexpr (cols == 4 && rows == 4) uniformMatrix4fv(location, count, transpose, ptr);
                else if constexpr (cols == 2 && rows == 3) uniformMatrix2x3fv(location, count, transpose, ptr);
                else if constexpr (cols == 3 && rows == 2) uniformMatrix3x2fv(location, count, transpose, ptr);
                else if constexpr (cols == 2 && rows == 4) uniformMatrix2x4fv(location, count, transpose, ptr);
                else if constexpr (cols == 4 && rows == 2) uniformMatrix4x2fv(location, count, transpose, ptr);
                else if constexpr (cols == 3 && rows == 4) uniformMatrix3x4fv(location, count, transpose, ptr);
                else if constexpr (cols == 4 && rows == 3) uniformMatrix4x3fv(location, count, transpose, ptr);
            }
        }
    }

} // namespace Uniform
} // namespace ogl