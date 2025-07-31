#include "../../include/structBuilder/struct_builder.hpp"

StructBuilder() = default;

void StructBuilder::createStruct() 
{

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