#include<iostream>

void print_help() {
    std::cout << "Commands:\n" 
            << "\thelp\t\tprints help\n"
            << "\tquit or ctrl+c\t\tquit out of shell\n";
}

void print_unknow_command(std::string_view command) {
    std::cout << "Command \""
            << command
            << "\" not found\n"
            << "Try: help\n";
}

int main() {
    std::string input;

    bool running = true;

    while(running) {
        std::cout << "> ";
        std::cin >> input;

        if (input == "") {
            continue;
        }
        else if (input == "quit") {
            running = false;
            continue;
        }
        else if (input == "help") {
            print_help();
            continue;
        }
        else {
            print_unknow_command(input);
            continue;
        }
    }

    return 0;
}