#include <Tempest/Game.hpp>

void EntityManager::SpawnEntity(Entity* _entity) {
    _entity->_id = EntityManager::_entities.size() + 1;
    EntityManager::_entities.push_back(_entity);
}

void EntityManager::UpdateEntities() {
    // Create a itetrator for the entities list
    std::list<Entity*>::iterator _it = EntityManager::_entities.begin();

    // Access the iterator and increment until we reach the end
    for (; _it != EntityManager::_entities.end(); ++_it) {
        (*_it)->Update();
    }
}

void EntityManager::RenderEntities() {
    // Create a itetrator for the entities list
    std::list<Entity*>::iterator _it = EntityManager::_entities.begin();

    // Access the iterator and increment until we reach the end
    for (; _it != EntityManager::_entities.end(); ++_it) {
        (*_it)->Render();
    }
}

std::list<Entity*> EntityManager::ListEntities() {
    return EntityManager::_entities;
}

void EntityManager::DestroyEntity(Entity* _entity) {
    // Create a itetrator for the entities list
    std::list<Entity*>::iterator _it = EntityManager::_entities.begin();
    
    // Access the iterator and increment until we reach the end
    for (; _it != EntityManager::_entities.end(); ++_it) {
        if ((*_it)->_id == _entity->_id) {
            EntityManager::_entities.erase(_it);
            delete (*_it);
            break;
        }
    }
}

Entity* EntityManager::GetEntityByID(int64_t _entityID) {
    // Create a itetrator for the entities list
    std::list<Entity*>::iterator _it = EntityManager::_entities.begin();
    
    // Access the iterator and increment until we reach the end
    for (; _it != EntityManager::_entities.end(); ++_it) {
        if ((*_it)->_id == _entityID) return (*_it);
    }
}