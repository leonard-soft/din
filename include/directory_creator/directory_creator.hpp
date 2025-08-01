#ifndef DIRECTORY_CREATOR_HPP
#define DIRECTORY_CREATOR_HPP

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

class DirectoryCreator {
public:
    void create_directory(fs::path path);
};

#endif // DIRECTORY_CREATOR_HPP