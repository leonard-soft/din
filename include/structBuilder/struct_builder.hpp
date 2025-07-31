#ifndef STRUCT_BUILDER_HPP
#define STRUCT_BUILDER_HPP

#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>


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

    void create_struct();

    std::string getProjectName();
    std::string getDescription();
    std::string getAuthor();
    std::string getLicense();

};

#endif // STRUCT_BUILDER_HPP
