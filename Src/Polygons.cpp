#include <Tempest/Game.hpp>

void Polygons::DrawCube(Rectangle* _rect, bool _fill)
{
    SDL_FRect* _tmpRect = new SDL_FRect;
    _tmpRect->x = _rect->X;
    _tmpRect->y = _rect->Y;
    _tmpRect->w = _rect->width;
    _tmpRect->h = _rect->height;

    if (!_fill) {
        SDL_RenderRect(Game::mainRenderer->_renderer, _tmpRect);
    }
    else {
        SDL_RenderFillRect(Game::mainRenderer->_renderer, _tmpRect);
    }
}