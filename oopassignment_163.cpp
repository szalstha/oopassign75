#include <iostream>
#include <vector>
#include <set>
#include <string>

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    if (n < 3) {
        std::cout << "Array must contain at least three strings." << std::endl;
        return 1;
    }

    std::vector<std::string> strings(n);
    std::cout << "Enter " << n << " strings: ";
    std::cin.ignore(); // To ignore the newline character after the integer input
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, strings[i]);
    }

    std::set<std::string> uniqueStrings(strings.begin(), strings.end());
    
    if (uniqueStrings.size() < 3) {
        std::cout << "Not enough unique strings to find the third largest." << std::endl;
        return 1;
    }

    std::set<std::string>::reverse_iterator it = uniqueStrings.rbegin();
    std::advance(it, 2); // Move to the third largest

    std::cout << "The third largest string is: " << *it << std::endl;

    return 0;
}