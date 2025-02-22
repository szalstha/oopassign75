#include <iostream>
#include <limits>

int main() {
    int n;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Array must contain at least two elements." << std::endl;
        return 1;
    }

    int arr[n];

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];       
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];  
        }
    }

    if (secondLargest == std::numeric_limits<int>::min()) {
        std::cout << "There is no second largest element." << std::endl;
    } else {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    return 0;
}