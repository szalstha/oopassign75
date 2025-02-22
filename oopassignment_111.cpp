#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> findStringsWithNumbers(const std::vector<std::string>& vec) {
    std::vector<std::string> result;

    for (const auto& str : vec) {
        // Check if the string contains any digit
        for (char ch : str) {
            if (std::isdigit(ch)) {
                result.push_back(str);
                break; // No need to check further, we found a digit
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::string> vec;
    std::string input;
    int n;

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    // Input validation
    if (n <= 0) {
        std::cout << "Please enter a positive number of elements." << std::endl;
        return 1;
    }

    std::cin.ignore();

    std::cout << "Enter the elements of the vector (one per line):\n";
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, input);
        vec.push_back(input);
    }

    std::cout << "Original Vector elements:\n";
    for (const auto& str : vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> stringsWithNumbers = findStringsWithNumbers(vec);

    std::cout << "Find strings that contain a number(s) from the said vector:\n";
    for (const auto& str : stringsWithNumbers) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}