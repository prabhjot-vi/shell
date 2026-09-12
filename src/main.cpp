#include<iostream>

int main() {
    std::string input;
    std::cout << "> ";
    std::getline(std::cin, input);

    std::cout << "Input: " << input << "\n";
    return 0;
}