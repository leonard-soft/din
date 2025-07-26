#include "../include/app/app.hpp"
#include <memory>

int main(int argc, char* argv[]) {
    std::unique_ptr<App> app = std::make_unique<App>();
    app->run(argc, argv);
    return 0;
}