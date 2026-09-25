#include <iostream>
#include <string>
#include <format>
#include <random>

int UserInputInt(std::string prompt, std::string errorMessage, int min, int max) {
    int input;
    while (true) {
        std::cout << prompt;
        std::cin >> input;

        if (std::cin.fail() || input < min || input > max) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << errorMessage << std::endl;
        } 
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard any extra input
            return input;
        }
    }

}



int main() {
    //picks a random number 1-100, tells the user to guess

    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, 100); // define the range

    int random_number = distr(eng); // generate the random number

    //lwky dont know how randoms

    std::cout << "Guessing game time! I have an intager 1-100, start guessing!" << std::endl;
    bool isFound = false;
    while (!isFound)
    {
        
    }
}