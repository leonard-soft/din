#ifndef STRUCT_BUILDER_HPP
#define STRUCT_BUILDER_HPP

#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;


class StructBuilder {
private:
    std::string project_name;
    std::string description;
    std::string author;
    std::string license;

public:

    StructBuilder();

    void read_properties();
    void create_main_directory();
    void create_modules_dir();
    void create_json_file();
    void create_cpp_file();

    void create_struct();

    std::string get_project_name();
    std::string get_description();
    std::string get_author();
    std::string get_license();

};

#endif // STRUCT_BUILDER_HPP
