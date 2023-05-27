#pragma once
#include <Tempest/Game.hpp>

class Entity
{
public:
    Entity();
    virtual void Init();
    virtual void Update();
    virtual void Render();

    int id;
    Vector2* pos;
};