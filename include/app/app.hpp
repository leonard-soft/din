#ifndef APP_HPP
#define APP_HPP

class App {
public:
    void run(int argc, char* argv[]);    
    void createProject();
    void showVersion();
    void commandNotFound();
};

#endif //APP_HPP