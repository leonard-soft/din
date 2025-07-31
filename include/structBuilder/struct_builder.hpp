#ifndef STRUCT_BUILDER_HPP
#define STRUCT_BUILDER_HPP

#include <string>

class StructBuilder {
private:
    std::string projectName;
    std::string description;
    std::string author;
    std::string license;

public:

    StructBuilder();
    void createStruct();

    std::string getProjectName();
    std::string getDescription();
    std::string getAuthor();
    std::string getLicense();

};

#endif // STRUCT_BUILDER_HPP