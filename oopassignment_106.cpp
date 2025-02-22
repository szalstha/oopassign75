#include <iostream>
#include <vector>

int findSmallestMissing(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the sorted array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " sorted integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int missing = findSmallestMissing(arr);
    std::cout << "The smallest missing element is: " << missing << std::endl;

    return 0;
}