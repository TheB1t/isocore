#pragma once

#include <glad/glad.h>

#include <array>
#include <cstddef>
#include <type_traits>
#include <tuple>
#include <vector>
#include <unordered_map>
#include <ranges>

#include <render/vertex_array.hpp>
#include <render/buffer.hpp>

template<auto V>
using constant = std::integral_constant<decltype(V), V>;

template<size_t N>
struct FixedString {
    char str[N]{};

    constexpr FixedString(const char (&s)[N]) {
        for(size_t i = 0; i < N; ++i)
            str[i] = s[i];
    }

    constexpr operator const char*() const { return str; }
};

template<typename T>
struct GLTypeTraits;

template<> struct GLTypeTraits<float>           : constant<GL_FLOAT> {};
template<> struct GLTypeTraits<int>             : constant<GL_INT> {};
template<> struct GLTypeTraits<unsigned>        : constant<GL_UNSIGNED_INT> {};
template<> struct GLTypeTraits<short>           : constant<GL_SHORT> {};
template<> struct GLTypeTraits<unsigned short>  : constant<GL_UNSIGNED_SHORT> {};
template<> struct GLTypeTraits<char>            : constant<GL_BYTE> {};
template<> struct GLTypeTraits<unsigned char>   : constant<GL_UNSIGNED_BYTE> {};

template<FixedString Name, typename T, size_t Components, bool Normalized = false>
struct Attribute {
    static constexpr const char* name = Name;
    static constexpr GLenum type = GLTypeTraits<T>::value;
    static constexpr size_t components = Components;
    static constexpr bool normalized = Normalized;
    static constexpr size_t size = sizeof(T) * Components;
};

template<typename... Attrs>
class VertexLayout {
        static constexpr std::array<size_t, sizeof...(Attrs)> offsets = []{
            std::array<size_t, sizeof...(Attrs)> result{};
            size_t offset = 0;
            size_t index = 0;
            ((result[index++] = offset, offset += Attrs::size), ...);
            return result;
        }();

    public:
        static constexpr size_t stride = (Attrs::size + ... + 0);

        template<FixedString Name>
        static constexpr size_t offset_of() {
            constexpr size_t index = []{
                size_t idx = 0;
                bool found = false;
                ((found || (found = (Name == Attrs::name), !found) ? idx++ : 0), ...);
                return idx;
            }();
            static_assert(index < sizeof...(Attrs), "Attribute not found");
            return offsets[index];
        }

        static void setup_buffers(VertexArray& vao, Buffer& vbo) {
            vbo.bind();

            std::tuple<Attrs...> attrs;
            auto setupAttrib = [&](size_t I, const auto& attr) {
                vao.add_buffer(
                    I, // location matches shader layout
                    attr.components,
                    attr.type,
                    attr.normalized,
                    stride,
                    (void*)offsets[I]
                );
            };

            [&]<size_t... Is>(std::index_sequence<Is...>) {
                (setupAttrib(Is, std::get<Is>(attrs)), ...);
            }(std::make_index_sequence<sizeof...(Attrs)>{});
        }
};

using Position  = Attribute<"position", float, 3>;
using Normal    = Attribute<"normal", float, 3>;
using TexCoord  = Attribute<"texcoord", float, 2>;

using BaseLayout = VertexLayout<Position, Normal, TexCoord>;