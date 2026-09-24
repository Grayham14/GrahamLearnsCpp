#include <iostream>
#include <string>

//make varible c from user input, do operation 'c++'

int main(){

    std::cout << "Give me a number please ('C'): ";
    int c{};
    std::cin >> c;

    std::cout << "Together, we are C++ | The new number is ";

    c++; //its peak like look it did the thing

    std::cout << c;
}