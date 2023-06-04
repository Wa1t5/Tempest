#include <Tempest/Game.hpp>

SDL_Texture* ResourceLoader::LoadSprite(std::string _path) {
    SDL_Texture* tmpTexture = IMG_LoadTexture(Game::mainRenderer->_renderer, _path.c_str());
    return tmpTexture;
}