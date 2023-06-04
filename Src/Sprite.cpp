#include <Tempest/Game.hpp>

Sprite::Sprite(std::string _path) {
    _texture = IMG_LoadTexture(Game::mainRenderer->_renderer, Game::mainFileSystem->GetFile(_path).c_str());
    _rect = new SDL_Rect;
    SDL_QueryTexture(_texture, NULL, NULL, &_rect->w, &_rect->h);
}

void Sprite::Draw(Vector2* _pos) {
    SDL_FRect* _tmpRect = new SDL_FRect;
    _tmpRect->w = _rect->w;
    _tmpRect->h = _rect->h;
    _tmpRect->x = _pos->X;
    _tmpRect->y = _pos->Y;
    SDL_RenderTexture(Game::mainRenderer->_renderer, _texture, NULL, _tmpRect);
}

void Sprite::SetAlpha(float _alpha) {
    SDL_SetTextureBlendMode(_texture, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(_texture, _alpha);
}

Sprite::~Sprite() {
    SDL_DestroyTexture(_texture);
}