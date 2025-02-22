#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int countMaxRepeatedLetters(const std::string& word) {
    std::unordered_map<char, int> letterCount;
    int maxCount = 0;

    for (char c : word) {
        letterCount[c]++;
        if (letterCount[c] > maxCount) {
            maxCount = letterCount[c];
        }
    }

    return maxCount;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 

    std::istringstream stream(input);
    std::string word;
    std::string maxWord;
    int maxRepeatedCount = 0;

    while (stream >> word) {
        int repeatedCount = countMaxRepeatedLetters(word);
        if (repeatedCount > maxRepeatedCount) {
            maxRepeatedCount = repeatedCount;
            maxWord = word;
        }
    }

    if (maxRepeatedCount > 1) {
        std::cout << "Word which has the highest number of repeated letters: " << maxWord << std::endl;
    } else {
        std::cout << "No word with repeated letters found." << std::endl;
    }

    return 0;
}