#pragma once
#include <Tempest/Game.hpp>

class Sprite
{
public: 
    Sprite(std::string _path);

    void Draw(Vector2* _pos);
    void SetAlpha(float _alpha);
    
    ~Sprite();

    // Info
    SDL_Rect* _rect;
    SDL_Texture* _texture;
};