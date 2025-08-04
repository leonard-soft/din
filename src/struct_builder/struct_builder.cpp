#include "../../include/struct_builder/struct_builder.hpp"

StructBuilder::StructBuilder() = default;

/**
 * @brief read_properties
 */
void StructBuilder::read_properties()
{
    std::cout << "↳ 〔 ✾ Name ✾ 〕: ";
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
    DirectoryCreator *dc = new DirectoryCreator();
    fs::path project_dir = fs::current_path() / this->project_name;
    dc->create_directory(project_dir);
    delete dc;
}

/**
 * @brief create modules dir
 */
void StructBuilder::create_modules_dir()
{
    DirectoryCreator *dc = new DirectoryCreator();
    fs::path modules_path = fs::current_path() / this->project_name / "modules";
    dc->create_directory(modules_path);
    delete dc;
}

/**
 * @brief create json file
 */
void StructBuilder::create_json_file()
{
    fs::path din_file = fs::current_path() / this->project_name / "din.json";
    std::ofstream json_file(din_file.c_str());
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
    std::cout << "✠ File " << din_file.c_str() << " created. ✠" << std::endl;
}

/**
 * @brief create cpp file
 */
void StructBuilder::create_cpp_file()
{
    fs::path cpp_file = fs::current_path() / this->project_name / "main.cpp";
    std::ofstream main_file(cpp_file.c_str());
    if(main_file.is_open())
    {
        main_file << "#include <iostream> \n";
        main_file << "\n";
        main_file << "int main() \n";
        main_file << "{ \n";
        main_file << "    std::cout << \" you are using c++ and din \" << std::endl; \n";
        main_file << "    return 0; \n";
        main_file << "}";
    }
    else 
    {
        std::cerr << "didn't write" << std::endl;
    }
    std::cout << "✠ File " << cpp_file.c_str() << " created. ✠" << std::endl;
}

/**
 * @brief create cmake file
 */
void StructBuilder::create_cmake_file()
{
    fs::path cmake_file = fs::current_path() / this->project_name / "CMakeList.txt";
    std::ofstream cmake(cmake_file.c_str());
    if (cmake.is_open())
    {
        cmake << "cmake_minimum_required(VERSION 3.10)";
        cmake << "\n";
        cmake << "project( " << this->project_name << ")";
        cmake << "\n";
        cmake << "add_executable(" << this->project_name << "main.cpp)";  
    } else {
        std::cerr << "didn't write" << std::endl;
    }
    std::cout << "✠ File " << cmake_file.c_str() << " created. ✠" << std::endl;
}

/**
 * @brief create struct
 */
void StructBuilder::create_struct() 
{
    create_main_directory();
    create_modules_dir();
    create_json_file();
    create_cpp_file();
    create_cmake_file();
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