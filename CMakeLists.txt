cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

# Project
project("Tempest" VERSION 0.0)

######### Link libraries #########

# SDL2
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/SDL/SDL3.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL/include")

# SDL2_image
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL_image")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/SDL_image/SDL3_image.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL_image/include")


# Need to be built as a STATIC library
# Project files
include_directories("${PROJECT_SOURCE_DIR}/Include")
add_library("Tempest" STATIC
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Game.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Game.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Input.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Input.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Physics.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Physics.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Polygons.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Polygons.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Renderer.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Renderer.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/ResourceLoader.hpp"
            "${PROJECT_SOURCE_DIR}/Src/ResourceLoader.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Sprite.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Sprite.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Math.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Math.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/Window.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Window.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Tempest/FileSystem.hpp"
            "${PROJECT_SOURCE_DIR}/Src/FileSystem.cpp"
            )

# Link the framework to the testing project
link_libraries("${PROJECT_SOURCE_DIR}/Build/Tempest.lib")

############ Hiems Ventus
project("HiemsVentus")
add_executable("HiemsVentus" "Projects/Hiems Ventus/Src/Main.cpp")

