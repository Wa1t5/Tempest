#pragma once
#include <Tempest/Game.hpp>

class EntityManager : public Entity {
public:
    void SpawnEntity(Entity* _entity);
    Entity* GetEntityByID(int64_t _entityID);
    void DestroyEntity(Entity* _entity);
    void EntityExists(Entity* _entity);
    std::list<Entity*> ListEntities();
    void InitEntities();
    void LoadEntitiesResources();
    void UpdateEntities();
    void RenderEntities();

private:
    std::list<Entity*> _entities;
};