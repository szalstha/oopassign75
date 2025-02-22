#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string cleanedInput;
    for (char ch : input) {
        if (std::isalnum(ch)) {
            cleanedInput += std::tolower(ch);
        }
    }
    bool result = isPalindrome(cleanedInput, 0, cleanedInput.length() - 1);
    if (result) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}