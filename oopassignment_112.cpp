#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array must contain at least one element." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::unordered_set<int> seen;

    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            std::cout << "The first repeating element is: " << arr[i] << std::endl;
            return 0;
        } else {
            seen.insert(arr[i]);
        }
    }

    std::cout << "No repeating elements found." << std::endl;
    return 0;
}