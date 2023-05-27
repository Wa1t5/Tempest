#pragma once
#include <Tempest/Game.hpp>

class Renderer
{
public:
    Renderer(Window* _window);
    void Clear();
    void SetRenderColor(int _r, int _g, int _b, int _a);
    void ChangeBuffer();
    Vector2* GetDisplaySize();

    // Info
    SDL_Renderer* _renderer = nullptr;
    SDL_Window* _window = nullptr;
};