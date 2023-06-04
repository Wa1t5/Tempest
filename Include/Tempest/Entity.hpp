#pragma once
#include <Tempest/Game.hpp>

class Entity {
public:
    Entity();
    ~Entity();
    virtual void Update();
    virtual void Render();
    
    int64_t _id = 0;
};