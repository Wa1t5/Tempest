#include <Tempest/Game.hpp>

Window::Window(std::string _title, int _width, int _height)
{
    _window = SDL_CreateWindow(_title.c_str(), _width, _height, NULL);
}

void Window::SetWindowTitle(std::string _title)
{
    SDL_SetWindowTitle(_window, _title.c_str());
}