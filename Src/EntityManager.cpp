#include <Tempest/Game.hpp>

void EntityManager::SpawnEntity(Entity* _entity, Vector2* _pos)
{
    EntityManager::_entities_c++;
    _entity->Init();
    _entity->pos = new Vector2(_pos->X, _pos->Y);
    EntityManager::_entities.push_back(_entity);
}

void EntityManager::UpdateEntities()
{
    for (int i = 0; i <= EntityManager::_entities_c - 1; i++)
    {
        if (EntityManager::_entities[i] != NULL)
        {
            EntityManager::_entities[i]->Update();
        }
    }
}

void EntityManager::RenderEntities()
{
    for (int i = 0; i <= EntityManager::_entities_c - 1; i++)
    {
        if (EntityManager::_entities[i] != NULL)
        {
            EntityManager::_entities[i]->Render();
        }
    }
}

void EntityManager::DestroyEntity(Entity* _entity)
{
    EntityManager::_entities.erase(EntityManager::_entities.begin() + _entity->id);
}
