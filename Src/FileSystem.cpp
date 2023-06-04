#include <Tempest/Game.hpp>

FileSystem::FileSystem(std::string _gameDir) {
    _workingDir = _gameDir;
}

std::string FileSystem::GetFile(std::string _filePath) {
   return _workingDir + "/" + _filePath;
}

bool FileSystem::FileExists(std::string _filePath) {
    return true;
}