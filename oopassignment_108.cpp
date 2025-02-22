#include <iostream>
#include <vector>

int sumArray(const std::vector<int>& arr, int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element [" << i << "]: ";
        std::cin >> arr[i];
    }

    int totalSum = sumArray(arr, size);

    std::cout << "The sum of all elements in the array is: " << totalSum << std::endl;

    return 0;
}