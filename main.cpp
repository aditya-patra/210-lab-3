/*
Aditya Patra
COMSC 210
Lab 3
8/29/25

Program description - says hello 'name' to user
*/

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: \n";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}