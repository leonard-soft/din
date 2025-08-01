#ifndef APP_HPP
#define APP_HPP

class App {
public:
    void run(int argc, char* argv[]);    
    void create_project();
    void show_version();
    void show_command_not_found();
    void show_write_command();
    void show_help_info();
};

#endif //APP_HPP