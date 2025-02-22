#include <iostream>
#include <string>
#include <unordered_map>

bool verifyLetters(const std::string& str1, const std::string& str2) {
    std::unordered_map<char, int> charCount;

    for (char ch : str1) {
        charCount[ch]++;
    }

    for (char ch : str2) {
        if (charCount[ch] == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    bool result = verifyLetters(str1, str2);

    if (result) {
        std::cout << "All letters in the second string appear in the first string." << std::endl;
    } else {
        std::cout << "Not all letters in the second string appear in the first string." << std::endl;
    }

    return 0;
}