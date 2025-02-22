#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {

    if (str.empty() || str.length() == 1) {
        return str;
    }

    return str.back() + reverseString(str.substr(0, str.length() - 1));
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reversed = reverseString(input);

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}