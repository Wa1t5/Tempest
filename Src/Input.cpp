#include <Tempest/Game.hpp>

void Input::_HandleMouse() {
    mouseButton = SDL_GetMouseState(&mouseX, &mouseY);
}

bool Input::IsMouseButtonDown(Uint32 _button) {
    if (mouseButton == _button) return true;
    return false;
}

bool Input::IsKeyDown(SDL_Scancode _key) {
    return SDL_GetKeyboardState(NULL)[_key];
}

/*
void Input::HandleKeyboard(SDL_Scancode key, int state)
{
    Input::nextKey = key;
    Input::nextKeyState = state;

    UpdateKeyboardState();
}

bool Input::IsKeyPressed(SDL_Scancode key)
{
    if (Input::curKey == key && Input::curKeyState == 2)
    {
        ResetKeyboardState();
        return true;
    }
    return false;
}

bool Input::IsKeyDown(SDL_Scancode key)
{
    if (Input::curKey == key && Input::curKeyState == 2) return true;
    return false;
}

bool Input::IsKeyUP(SDL_Scancode key)
{
    if (Input::curKey == key && Input::curKeyState == 1)
    {
        ResetKeyboardState();
        return true;
    }
    return false;
}

void Input::UpdateKeyboardState()
{
    if (Input::curKey != Input::nextKey)
    {
        Input::prevKey = Input::curKey;
        Input::curKey = Input::nextKey;
    }
    if (Input::curKeyState != Input::nextKeyState)
    {
        Input::prevKeyState = Input::curKeyState;
        Input::curKeyState = Input::nextKeyState;
    }
}

void Input::ResetKeyboardState()
{
    //Input::curKey = NULL;
    Input::curKeyState = NULL;
}*/