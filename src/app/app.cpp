// implementation header
#include "../../include/app/app.hpp"

// libraries header
#include <iostream>
#include <string>
#include <memory>
#include "../../include/equals/equals.hpp"

// namespaces
using namespace din::equals;


/**
 * @brief App::run method
 * 
 * this method has the code to initialize and configure a c++ project
 * also this function contains the logic code to add dependencies into the 
 * projects.
 */
void App::run(int argc, char* argv[]) {

    if (argc >= 2) {
        if (equals("start", argv[1])) {
            createProject();
        } else if (equals("-v", argv[1])) {
            showVersion();
        } else {
            commandNotFound();
        }
    } else {
        std::cout << "write a command";
    }

}

/**
 *  @brief createProject
 */
void App::createProject() {
    std::unique_ptr<std::string> projectName = std::make_unique<std::string>();
    std::unique_ptr<std::string> projectDescription = std::make_unique<std::string>();
    std::unique_ptr<std::string> author = std::make_unique<std::string>();
    std::unique_ptr<std::string> license = std::make_unique<std::string>();

    std::cout << "↳ 〔 ✾ Names ✾ 〕: ";
    std::getline(std::cin, *projectName); 

    std::cout << "↳ 〔 ✍  Description 〕: ";
    std::getline(std::cin, *projectDescription);

    std::cout << "↳ 〔 ♡ Author ♡ 〕: ";
    std::getline(std::cin, *author);

    std::cout << "↳ 〔 ❖ License ❖ 〕: ";
    std::getline(std::cin, *license);
}

/**
 * @brief show Version method
 */
void App::showVersion() {
    std::cout << "╔╦══• •✠•❀•✠ • •══╦╗" << std::endl;
    std::cout << "  VERSION : 1.0.0" << std::endl;
    std::cout << "╚╩══• •✠•❀•✠ • •══╩╝" << std::endl;
}

/**
 * @brief Command not foud method
 */
void App::commandNotFound() {
    std::cout << "❍━━━━━━❑❒❖❑❒ ━━━━━━❍" << std::endl;
    std::cout << "  Command Not Found" << std::endl;
    std::cout << "❍━━━━━━❑❒❖❑❒ ━━━━━━❍" << std::endl;
}