#pragma once
#include <Tempest/Game.hpp>

class Window {
public:
    Window(std::string title, int width, int height);
    void SetWindowTitle(std::string title);

    // Info
    SDL_Window* _window = nullptr;
};