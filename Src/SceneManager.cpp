#include <Tempest/Game.hpp>

void SceneManager::LoadScene(Scene* _scene) {
    _currentScene = _scene;
    SceneManager::InitScene();
}

void SceneManager::InitScene() {
    _currentScene->Init();
}

void SceneManager::UpdateScene() {
    _currentScene->Update();
}

void SceneManager::RenderScene() {
    _currentScene->Render();
}