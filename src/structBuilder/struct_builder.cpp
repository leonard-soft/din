#include "../../include/structBuilder/struct_builder.hpp"

StructBuilder::StructBuilder() = default;

/**
 * @brief read_properties
 */
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

    std::cout << "\n";
}

/**
 * @brief create main directory
 */
void StructBuilder::create_main_directory()
{
    fs::path projectDir = fs::current_path() / this->project_name;
    try 
    {
        if (fs::create_directory(projectDir))
        {
            std::cout << "✠ Directory " << projectDir << " created ✠" << std::endl;
        }
        else 
        {
            std::cout << "✠ Directory " << projectDir << " already exists ✠" << std::endl;
        }
    } 
    catch (const fs::filesystem_error& e)
    {
        std::cerr << "Filesystem Error: "  << e.what();
    }
}

/**
 * @brief create modules dir
 */
void StructBuilder::create_modules_dir()
{
    fs::path modules_path = fs::current_path() / this->project_name / "modules";
    try 
    {
        if (fs::create_directory(modules_path))
        {
            std::cout << "✠ Directory " << modules_path << " created ✠" << std::endl;
        }
        else
        {
            std::cout << "✠ Directory " << modules_path << " already exists ✠" << std::endl;
        }
    }
    catch (const fs::filesystem_error& e)
    {
        std::cerr << "Filesystem Error: "  << e.what();
    }
}

/**
 * @brief create json file
 */
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
    create_modules_dir();
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