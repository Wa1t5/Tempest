#pragma once
#include <Tempest/Game.hpp>

class ResourceLoader {
public:
    static SDL_Texture* LoadSprite(std::string _path);
};