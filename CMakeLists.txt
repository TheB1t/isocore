cmake_minimum_required(VERSION 3.10)
project(isocore)
include(FetchContent)

FetchContent_Declare(glfw GIT_REPOSITORY git@github.com:glfw/glfw.git GIT_TAG master)
FetchContent_Declare(glm GIT_REPOSITORY git@github.com:g-truc/glm.git GIT_TAG master)
FetchContent_Declare(tinyobjloader GIT_REPOSITORY git@github.com:tinyobjloader/tinyobjloader.git GIT_TAG release)
FetchContent_Declare(imgui_src GIT_REPOSITORY git@github.com:ocornut/imgui.git GIT_TAG master)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output)

SET(CMAKE_C_FLAGS_RELEASE "-g0 -Ofast")
SET(CMAKE_C_FLAGS_DEBUG "-g3 -O0")
# SET(CMAKE_C_FLAGS "-Wall -Wextra")

add_compile_definitions(LOG_SHOW_FILE_LINE)
# add_compile_definitions(LOG_SHOW_FILE_FULLPATH)
# add_compile_definitions(LOG_SHOW_FUNC_NAME)
add_compile_definitions(GLFW_DEBUG_CONTEXT)

set(GLFW_BUILD_EXAMPLES OFF)

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
	message(STATUS "Windows detected")
	set(GLFW_BUILD_WIN32 ON)
	set(BUILD_TYPE_SUFFIX "win32")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
	find_package(PkgConfig REQUIRED)
	pkg_check_modules(WAYLAND wayland-client)
	pkg_check_modules(X11 x11)

	if(X11_FOUND)
		message(STATUS "X11 detected")
		set(GLFW_BUILD_X11 ON)
		set(GLFW_BUILD_WAYLAND OFF)
		set(BUILD_TYPE_SUFFIX "x11")
	elseif(WAYLAND_FOUND)
		message(STATUS "Wayland detected")
		set(GLFW_BUILD_X11 OFF)
		set(GLFW_BUILD_WAYLAND ON)
		set(BUILD_TYPE_SUFFIX "wayland")
	else()
		message(FATAL_ERROR "Neither Wayland or X11 detected")
	endif()
else()
	message(FATAL_ERROR "Unsupported platform")
endif()

FetchContent_MakeAvailable(glfw glm tinyobjloader imgui_src)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}_${BUILD_TYPE_SUFFIX}")
include_directories(include)

add_subdirectory(glad)

set(IMGUI_SOURCES
	${imgui_src_SOURCE_DIR}/imgui.cpp
	${imgui_src_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
	${imgui_src_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
	${imgui_src_SOURCE_DIR}/imgui_demo.cpp
	${imgui_src_SOURCE_DIR}/imgui_tables.cpp
	${imgui_src_SOURCE_DIR}/imgui_widgets.cpp
	${imgui_src_SOURCE_DIR}/imgui_draw.cpp
)

add_library(ImGui STATIC ${IMGUI_SOURCES})

target_include_directories(ImGui PUBLIC ${imgui_src_SOURCE_DIR})
target_link_libraries(ImGui PRIVATE glad glfw)

target_link_libraries(${PROJECT_NAME} PRIVATE glad glfw glm tinyobjloader ImGui)

if (RESOURCES_PATH)
	target_compile_definitions(${PROJECT_NAME} PUBLIC -DRESOURCES_PATH="${RESOURCES_PATH}")
else()
	target_compile_definitions(${PROJECT_NAME} PUBLIC -DRESOURCES_PATH="../resources/")
endif()