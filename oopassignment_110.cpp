#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <sstream>

std::vector<std::string> capitalizeFirstCharacter(const std::vector<std::string>& vec) {
    std::vector<std::string> result;

    for (const auto& str : vec) {
        if (!str.empty()) {
            std::string capitalized = str;
            capitalized[0] = std::toupper(capitalized[0]);
            result.push_back(capitalized);
        } else {
            result.push_back(str);
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

    if (n <= 0) {
        std::cout << "Please enter a positive number of elements." << std::endl;
        return 1;
    }

    std::cin.ignore();

    std::cout << "Enter the elements of the vector (separated by spaces):\n";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::string color;

    while (iss >> color) {
        vec.push_back(color);
    }

    std::cout << "Original Vector elements:\n";
    for (const auto& color : vec) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> capitalizedElements = capitalizeFirstCharacter(vec);

    std::cout << "Capitalize the first character of each vector element:\n";
    for (const auto& color : capitalizedElements) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}