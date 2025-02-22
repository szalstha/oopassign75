#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 

    bool capitalizeNext = true;
    for (char &ch : input) {
        if (capitalizeNext && !std::isspace(ch)) {
            ch = std::toupper(ch); 
            capitalizeNext = false; 
        } else if (std::isspace(ch)) {
            capitalizeNext = true; 
        }
    }

    std::cout << "Capitalized string: " << input << std::endl;

    return 0;
}