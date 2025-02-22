#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;

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

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    if (k <= 0 || k > n) {
        std::cout << "k must be between 1 and " << n << "." << std::endl;
        return 1;
    }

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    std::cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}