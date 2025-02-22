#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Array must contain at least two elements." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::unordered_set<int> seen;
    std::vector<int> repeating;

    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            if (repeating.size() < 2) {
                repeating.push_back(arr[i]);
            }
        } else {
            seen.insert(arr[i]);
        }
    }

    if (repeating.size() == 2) {
        std::cout << "The two repeating elements are: " << repeating[0] << " and " << repeating[1] << std::endl;
    } else {
        std::cout << "Less than two repeating elements found." << std::endl;
    }

    return 0;
}