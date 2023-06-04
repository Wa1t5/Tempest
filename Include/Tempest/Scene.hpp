#pragma once
#include <Tempest/Game.hpp>

class Scene {
public:
    virtual void Init();
    virtual void Update();
    virtual void Render();
};