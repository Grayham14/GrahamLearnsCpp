#include <iostream>
#include <string>
#include <format>

int main() {
    std::string name; 
    int age;

    std::cout << "Enter your cats name: ";
    std::cin >> name;
    std::cout << "Enter your cats age: ";
    std::cin >> age;
    std::cout << "Here are your cats details: " << std::endl;

    std::cout << std::format("Your cat's name is {} and it is {} years old.", name, age) << std::endl;
}

