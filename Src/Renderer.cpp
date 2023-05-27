#include <Tempest/Game.hpp>


Renderer::Renderer(Window* window)
{
    // TODO: Need a function to cap fps instead of using vsync
    _renderer = SDL_CreateRenderer(window->_window, 0, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}

void Renderer::Clear()
{
    SDL_RenderClear(Renderer::_renderer);
}

void Renderer::SetRenderColor(int r, int g, int b, int a)
{
    SDL_SetRenderDrawColor(_renderer, r, g, b, a);
}

Vector2* Renderer::GetDisplaySize()
{
    // Get display mpde
    const SDL_DisplayMode* _dm = SDL_GetDesktopDisplayMode(SDL_GetDisplayForWindow(Game::mainWindow->_window));
    
    // Return
    return new Vector2(_dm->w, _dm->h);
}

void Renderer::ChangeBuffer()
{
    SDL_RenderPresent(Renderer::_renderer);
}