#include "../../include/structBuilder/struct_builder.hpp"

StructBuilder::StructBuilder() = default;

void StructBuilder::read_properties()
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

void StructBuilder::create_json_file()
{
    fs::path dinFile = fs::current_path() / this->project_name / "din.json";
    std::ofstream json_file(dinFile.c_str());
    if (json_file.is_open())
    {
        json_file << "{\n";
        json_file << "  \"name\": \"" << project_name << "\",\n";
        json_file << "  \"description\": \"" << description << "\",\n";
        json_file << "  \"author\": \"" << author << "\",\n";
        json_file << "  \"license\": \"" << license << "\"\n";
        json_file << "}";
        json_file.close();
    }
    else 
    {
        std::cerr << "didn't write" << std::endl;
    }
}

void StructBuilder::create_struct() 
{
    create_main_directory();
    create_json_file();
}

std::string StructBuilder::get_project_name() 
{
    return this->project_name;
}

std::string StructBuilder::get_description()
{
    return this->description;
}

std::string StructBuilder::get_author()
{
    return this->author;
}

std::string StructBuilder::get_license()
{
    return this->license;
}