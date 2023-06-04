#include <Tempest/Game.hpp>

Entity::Entity() {}
Entity::~Entity() {}
void Entity::Update() {}
void Entity::Render() {}


template <typename T> T* GetComponent(std::string _name) {
    // The class we want our object to be
    std::string _wantedClass = typeid(T).name();

    // Search for a component with the same type and name
    for (auto _cI = Entity::_components.begin(); _cI != Entity::_components.end(); ++_cI) {
        // Get object class type
        std::string _objClass = typeid(*(*_cI)).name();

        // Check if class type and name match
        if (_objClass == _wantedClass && (*_cI)->_name == _name) {

            // Cast from whatever the class is to our desired class
            return static_cast<T*>(*_cI);
        }
    }
    return nullptr;

}// This is declared here as a workaround because if I move this to Entity.cpp it won't work with the template definition
