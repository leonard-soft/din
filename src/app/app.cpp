// implementation header
#include "../../include/app/app.hpp"

// libraries header
#include <iostream>
#include <string>
#include "../../include/equals/equals.hpp"
#include "../../include/struct_builder/struct_builder.hpp"

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
        } else if (equals("-h", argv[1]))
        {
            show_help_info();
        } else
        {
            show_command_not_found();
        }
    } else 
    {
        show_write_command();
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

/**
 * @brief show write a command
 */
void App::show_write_command()
{
    std::cout << "━━✧♡✧━━━✧♡✧━━━✧♡✧━━" << std::endl;
    std::cout << "  write a command" << std::endl;
    std::cout << "━━✧♡✧━━━✧♡✧━━━✧♡✧━━" << std::endl;
}

/*
* @brief show help info
*/
void App::show_help_info()
{
    std::cout << "〔 Din Commands 〕" << std::endl;
    std::cout << "\n ↳ din start           create a new din project." << std::endl;
    std::cout << " ↳ din run             run your project." << std::endl;
    std::cout << " ↳ din new class       create a new class into the project." << std::endl;
    std::cout << " ↳ din new lib         create a structure to new library." << std::endl;
    std::cout << " ↳ din upload          upload your library to center repository" << std::endl;
    std::cout << " ↳ din add <lib>       install <lib> as dependency to your project." << std::endl;
    std::cout << " ↳ din build           compile and generate a binary." << std::endl;
    std::cout << " ↳ din test st         generate a unit testing structuro to your project" << std::endl;
    std::cout << " ↳ din -v              show the din version." << std::endl;
    std::cout << " ↳ din -h              show the din commands." << std::endl;
}