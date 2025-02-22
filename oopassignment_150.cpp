#include <iostream>
#include <vector>

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

    std::vector<int> updatedArr(n);

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            updatedArr[i] = arr[i + 1]; 
        } else if (i == n - 1) {
            updatedArr[i] = arr[i - 1]; 
        } else {
            updatedArr[i] = arr[i - 1] * arr[i + 1]; 
        }
    }

    std::cout << "Updated array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << updatedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}