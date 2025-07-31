#include "../../include/structBuilder/struct_builder.hpp"

StructBuilder::StructBuilder() = default;

void StructBuilder::readProperties()
{
    std::cout << "↳ 〔 ✾ Names ✾ 〕: ";
    std::getline(std::cin, this->project_name); 

    std::cout << "↳ 〔 ✍  Description 〕: ";
    std::getline(std::cin, this->description);

    std::cout << "↳ 〔 ♡ Author ♡ 〕: ";
    std::getline(std::cin, this->author);

    std::cout << "↳ 〔 ❖ License ❖ 〕: ";
    std::getline(std::cin, this->license);
}

void StructBuilder::create_main_directory()
{
    namespace fs = std::filesystem;
    fs::path projectDir = fs::current_path() / this->project_name;

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

void StructBuilder::create_struct() 
{
    create_main_directory();

    //fs::path dinFile = projectDir / "din.json"; 
    // std::ofstream jsonFile(dinFile.c_str());

}

std::string StructBuilder::getProjectName() 
{
    return this->project_name;
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