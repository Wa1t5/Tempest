#pragma once
#include <Tempest/Game.hpp>

class FileSystem 
{
public:
    FileSystem(std::string _gameDir = std::filesystem::current_path().string());
    std::string GetFile(std::string _filePath);
    bool FileExists(std::string _filePath);

private:
    std::string _workingDir = "";
};