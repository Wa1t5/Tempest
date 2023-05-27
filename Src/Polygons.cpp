#include <Tempest/Game.hpp>

void Polygons::DrawCube(Vector2* _pos, Vector2* _size, bool _fill)
{
    SDL_FRect* _tmpRect = new SDL_FRect;
    _tmpRect->x = _pos->X;
    _tmpRect->y = _pos->Y;
    _tmpRect->w = _size->X;
    _tmpRect->h = _size->Y;

    if (!_fill)
    {
        SDL_RenderRect(Game::mainRenderer->_renderer, _tmpRect);
    }
    else
    {
        SDL_RenderFillRect(Game::mainRenderer->_renderer, _tmpRect);
    }
}