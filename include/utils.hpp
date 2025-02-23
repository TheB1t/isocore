#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <functional>

#include <log.hpp>

class Utils {
    public:
        static std::string read_file(const std::string &filename) {
            std::ifstream file(filename);

            if (!file.is_open()) {
                LOG_DEBUG("Could not open file: %s", filename);
                return "";
            }

            std::ostringstream sstr;
            sstr << file.rdbuf();
            return sstr.str();
        }

        static inline void hash_combine(std::size_t& seed) { }

        template <typename T, typename... Rest>
        static inline void hash_combine(std::size_t& seed, const T& v, Rest... rest) {
            std::hash<T> hasher;
            seed ^= hasher(v) + 0x9e3779b9 + (seed<<6) + (seed>>2);
            hash_combine(seed, rest...);
        }

        template<typename T>
        struct is_glm_vector : std::false_type {};

        template<glm::length_t L, typename T, glm::qualifier Q>
        struct is_glm_vector<glm::vec<L, T, Q>> : std::true_type {};

        template<typename T>
        struct is_glm_quat : std::false_type {};

        template<typename T, glm::qualifier Q>
        struct is_glm_quat<glm::qua<T, Q>> : std::true_type {};

        template<typename T, typename Container>
        static T array_to_glm(const Container& container) {
            T result{};

            if constexpr (is_glm_quat<T>::value)
                result = T(1.0f, 0.0f, 0.0f, 0.0f);
            else
                result = T(static_cast<typename T::value_type>(0));

            size_t container_size = 0;
            if constexpr (std::is_array_v<Container>)
                container_size = std::extent_v<Container>;
            else
                container_size = container.size();

            const size_t elements = std::min(container_size, static_cast<size_t>(T::length()));
            for (size_t i = 0; i < elements; ++i)
                result[i] = container[i];

            return result;
        }

        template<typename T = glm::quat, typename Container>
        static auto arr_to_glm(const Container& container) ->
            std::enable_if_t<is_glm_quat<T>::value, T> {
            return array_to_glm<T>(container);
        }

        template<glm::length_t L, typename T = glm::vec<L, float>, typename Container>
        static auto arr_to_glm(const Container& container) ->
            std::enable_if_t<is_glm_vector<T>::value, T> {
            return array_to_glm<T>(container);
        }

        template<typename T>
        static std::string glm_to_string(const T& vec) {
            std::ostringstream oss;
            oss << "(";
            for (glm::length_t i = 0; i < vec.length(); ++i) {
                if (i > 0) oss << ", ";
                oss << vec[i];
            }
            oss << ")";
            return oss.str();
        }

        template<typename T, typename... Us>
        struct IndexOf;

        template<typename T>
        struct IndexOf<T> : std::integral_constant<size_t, 0> {};

        template<typename T, typename U, typename... Us>
        struct IndexOf<T, U, Us...> : std::integral_constant<size_t, 1 + IndexOf<T, Us...>::value> {};

        template<typename T, typename... Us>
        struct IndexOf<T, T, Us...> : std::integral_constant<size_t, 0> {};
};