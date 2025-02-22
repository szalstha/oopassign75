#include <iostream>
#include <string>

int main() {

    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input; 

    bool isPalindrome = true;

    int length = input.length();
    for (int i = 0; i < length / 2; ++i) {
        if (input[i] != input[length - 1 - i]) {
            isPalindrome = false; 
            break;
        }
    }

    if (isPalindrome) {
        std::cout << "True" << std::endl; 
    } else {
        std::cout << "False" << std::endl; 
    }

    return 0;
}