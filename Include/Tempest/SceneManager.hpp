#pragma once
#include <Tempest/Game.hpp>

class SceneManager : public Scene
{
public:
    void LoadScene(Scene* _scene);
    void InitScene();
    void LoadSceneResources();
    void UpdateScene();
    void RenderScene();
    
private:
    Scene* _currentScene;
};