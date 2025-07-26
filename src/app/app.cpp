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
void App::run() {

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

    if (equals("leonardo", "leonardo")) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }

}