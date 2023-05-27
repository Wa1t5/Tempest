#pragma once
#include <Tempest/Game.hpp>

class EntityManager : public Entity
{
public:
    void SpawnEntity(Entity* _entity, Vector2* _pos);
    void DestroyEntity(Entity* _entity);
    void EntityExists(Entity* _entity);
    void ReorganizeEntities();
    void InitEntities();
    void LoadEntitiesResources();
    void UpdateEntities();
    void RenderEntities();

private:
    /* Entity Manager: Info */
    int _entities_c = 0;
    std::vector<Entity*> _entities;
};