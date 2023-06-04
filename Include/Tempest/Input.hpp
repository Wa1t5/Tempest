#pragma once
#include <Tempest/Game.hpp>

class Input {
public:

    void _HandleMouse();
    bool IsKeyDown(SDL_Scancode _key);
    bool IsMouseButtonDown(Uint32 _button);
    
    // Info
    SDL_Scancode nextKey = SDL_SCANCODE_0;
    SDL_Scancode curKey = SDL_SCANCODE_0;
    SDL_Scancode prevKey = SDL_SCANCODE_0;
    int nextKeyState = NULL;
    int curKeyState = NULL;
    int prevKeyState = NULL;

    Uint32 mouseButton = NULL;
    float mouseX = NULL;
    float mouseY = NULL;
};