#include <iostream>
#include <format>
#include <string>

//temprature converter that reads C or F and converts to C or F respectivily

std::string ReadInputString(const std::string prompt, const std::string errorMsg){
    while(true)
    {
        std::cout << prompt;
        std::string value{};
        //make sure only numbers get put in
        if(std::cin >> value)
        {
            return value;
        }

        if (std::cin.eof())
        {
            std::exit(0);   // input was closed entirely (Ctrl+Z on Windows)
        }

        std::cout << errorMsg << "\n";
        std::cin.clear();   // reset the failure state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // discard the bad line
    }
}

int ReadInputInt(const std::string prompt, const std::string errorMsg){
    while(true)
    {
        std::cout << prompt;
        int value{};
        //make sure only numbers get put in
        if(std::cin >> value)
        {
            return value;
        }

        if (std::cin.eof())
        {
            std::exit(0);   // input was closed entirely (Ctrl+Z on Windows)
        }

        std::cout << errorMsg << "\n";
        std::cin.clear();   // reset the failure state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // discard the bad line
    }
}




int main(){
    std::string unit = ReadInputString("Enter C for Celsius or F for Fahrenheit: ");

}