#include <iostream>
#include <string>
#include <sstream> 

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 

    std::stringstream ss(input); 
    std::string word, largestWord;

    while (ss >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word; 
        }
    }

    std::cout << "Largest word: " << largestWord << std::endl;

    return 0;
}