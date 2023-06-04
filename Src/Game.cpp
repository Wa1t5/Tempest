#include <Tempest/Game.hpp>

Game::Game(std::string _title, std::string _workingDir, int _width, int _height) {  
    // Initialize engine
    if (_workingDir != "") mainFileSystem = new FileSystem(_workingDir);
    else mainFileSystem = new FileSystem();
    mainWindow = new Window(_title, _width, _height);
    mainRenderer = new Renderer(mainWindow);
    mainInput = new Input();
}

void Game::Init() {}

void Game::EventHadling() {
    while (SDL_PollEvent(&e) != 0) {
        // Handle quit events
        if (e.type == SDL_EVENT_QUIT) shouldQuit = true;

        // Handle mouse
        mainInput->_HandleMouse();
    }
}

void Game::Update() {}

void Game::Render() {}

void Game::SetFPS(int fps) {} // TODO

Game::~Game() {
    delete mainWindow;
    delete mainRenderer;
    delete mainInput;
    delete mainFileSystem;

    SDL_Quit();
    IMG_Quit();
}