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

    void createStruct();

};

#endif // STRUCT_BUILDER_HPP