#include "../../include/structBuilder/struct_builder.hpp"

StructBuilder::StructBuilder() = default;

void StructBuilder::readProperties()
{
    std::cout << "↳ 〔 ✾ Names ✾ 〕: ";
    std::getline(std::cin, this->projectName); 

    std::cout << "↳ 〔 ✍  Description 〕: ";
    std::getline(std::cin, this->description);

    std::cout << "↳ 〔 ♡ Author ♡ 〕: ";
    std::getline(std::cin, this->author);

    std::cout << "↳ 〔 ❖ License ❖ 〕: ";
    std::getline(std::cin, this->license);
}

void StructBuilder::createMainDirectory()
{
    namespace fs = std::filesystem;
    fs::path projectDir = fs::current_path() / this->projectName;

    try 
    {
        if (fs::create_directory(projectDir))
        {
            std::cout << "✠ Directory " << projectDir << " created ✠";
        }
        else 
        {
            std::cout << "✠ Directory " << projectDir << " already exists ✠";
        }
    } 
    catch (const fs::filesystem_error& e)
    {
        std::cerr << "Filesystem Error: "  << e.what();
    }
}

void StructBuilder::createStruct() 
{
    createMainDirectory();

    //fs::path dinFile = projectDir / "din.json"; 
    // std::ofstream jsonFile(dinFile.c_str());

}

std::string StructBuilder::getProjectName() 
{
    return this->projectName;
}

std::string StructBuilder::getDescription()
{
    return this->description;
}

std::string StructBuilder::getAuthor()
{
    return this->author;
}

std::string StructBuilder::getLicense()
{
    return this->license;
}