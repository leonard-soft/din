// implementation header
#include "../../include/app/app.hpp"

// libraries header
#include <iostream>
#include <string>
#include "../../include/equals/equals.hpp"
#include "../../include/structBuilder/struct_builder.hpp"

// namespaces
using namespace din::equals;

/**
 * @brief App::run method
 * 
 * this method has the code to initialize and configure a c++ project
 * also this function contains the logic code to add dependencies into the 
 * projects.
 */
void App::run(int argc, char* argv[]) 
{
    if (argc >= 2) 
    {
        if (equals("start", argv[1])) 
        {
            create_project();
        } else if (equals("-v", argv[1])) 
        {
            show_version();
        } else 
        {
            show_command_not_found();
        }
    } else 
    {
        std::cout << "write a command";
    }
}

/**
 *  @brief createProject
 */
void App::create_project() 
{
    StructBuilder stb;
    stb.read_properties();
    stb.create_struct();
}

/**
 * @brief show Version method
 */
void App::show_version() 
{
    std::cout << "╔╦══• •✠•❀•✠ • •══╦╗" << std::endl;
    std::cout << "  VERSION : 1.0.0" << std::endl;
    std::cout << "╚╩══• •✠•❀•✠ • •══╩╝" << std::endl;
}

/**
 * @brief Command not foud method
 */
void App::show_command_not_found() 
{
    std::cout << "❍━━━━━━❑❒❖❑❒ ━━━━━━❍" << std::endl;
    std::cout << "  Command Not Found" << std::endl;
    std::cout << "❍━━━━━━❑❒❖❑❒ ━━━━━━❍" << std::endl;
}
