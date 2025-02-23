#pragma once

#include <unordered_map>
#include <memory>
#include <mutex>
#include <type_traits>

#include <log.hpp>
#include <utils.hpp>

template<typename T>
using RegistryElement = std::shared_ptr<T>;

template<typename T>
using RegistryElementMap = std::unordered_map<std::string, RegistryElement<T>>;

template<typename... Ts>
class Registry {
    public:
        template<typename T>
        RegistryElement<T> get(const std::string& name) {
            std::lock_guard<std::mutex> lock(get_mutex<T>());

            RegistryElementMap<T>& map = get_map<T>();

            auto elem = map.find(name);
            if (elem == map.end())
                return nullptr;

            return elem->second;
        }

        template<typename T>
        void set(const std::string& name, RegistryElement<T> elem) {
            std::lock_guard<std::mutex> lock(get_mutex<T>());
            // Just don't care about existing RegistryElement. Dirty? Yes.
            get_map<T>()[name] = elem;
        }

        template<typename T>
        void erase(const std::string& name) {
            std::lock_guard<std::mutex> lock(get_mutex<T>());

            get_map<T>().erase(name);
        }

        template<typename T>
        void for_each(std::function<void(const std::string&, RegistryElement<T>)> func) {
            std::lock_guard<std::mutex> lock(get_mutex<T>());

            for (const auto& elem : get_map<T>())
                func(elem.first, elem.second);
        }

    private:
        template<typename T>
        RegistryElementMap<T>& get_map() {
            static_assert(Utils::IndexOf<T, Ts...>::value < sizeof...(Ts), "RegistryElement type not found");
            return std::get<RegistryElementMap<T>>(maps_);
        }

        template<typename T>
        std::mutex& get_mutex() {
            constexpr size_t index = Utils::IndexOf<T, Ts...>::value;
            return mutexes_[index];
        }

        std::tuple<RegistryElementMap<Ts>...> maps_;
        std::array<std::mutex, sizeof...(Ts)> mutexes_;
};
