#if defined(__linux__)
    #include "../../include/directory_creator/directory_creator.hpp"
#elif defined(_WIN32)
    #include "..\..\include\directory_creator\directory_creator.hpp"
#endif


/**
 * @brief create directory
 */
void DirectoryCreator::create_directory(fs::path path)
{
    try 
    {
        if (fs::create_directory(path))
        {
            std::cout << "✠ Directory " << path << " created ✠" << std::endl;
        }
        else
        {
            std::cout << "✠ Directory " << path << " already exists ✠" << std::endl;
        }
    }
    catch (const fs::filesystem_error& e)
    {
        std::cerr << "Filesystem Error: "  << e.what();
    }
}