#pragma once

// Standard libraries
#include <iostream>
#include <filesystem>
#include <random>
#include <vector>

// Deps
#include <SDL3/SDL.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_image.h>

// Framework math stuff
#include <Tempest/Math.hpp>

// Framework stuff
#include <Tempest/FileSystem.hpp>
#include <Tempest/Window.hpp>
#include <Tempest/Renderer.hpp>
#include <Tempest/Sprite.hpp>
#include <Tempest/Input.hpp>
#include <Tempest/ResourceLoader.hpp>
#include <Tempest/Polygons.hpp>

// Entitys scenes
#include <Tempest/Entity.hpp>
#include <Tempest/EntityManager.hpp>
#include <Tempest/Scene.hpp>
#include <Tempest/SceneManager.hpp>

// Framework physics stuff
#include "Physics.hpp"

class Game
{
public:

    Game(std::string _title = "Tempest", std::string _workingDir = "", int _width = 1280, int _height = 720);

    void Init();
    void LoadResources();
    void EventHadling();
    void Update();
    void Render();

    // Todo
    void SetFPS(int fps);

    ~Game();

    inline static bool shouldQuit = false;
    inline static enum GameStates {RUNNING, PAUSED};
    inline static int GameState = RUNNING;
    inline static Window* mainWindow = nullptr;
    inline static Renderer* mainRenderer = nullptr;
    inline static Input* mainInput = nullptr;
    inline static FileSystem* mainFileSystem = nullptr;
    inline static SDL_Event e;
};
