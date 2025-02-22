#include <iostream>
#include <vector>
#include <limits>

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

    int lowest = std::numeric_limits<int>::max();
    int secondLowest = std::numeric_limits<int>::max();
    int highest = std::numeric_limits<int>::min();
    int secondHighest = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        if (arr[i] < lowest) {
            secondLowest = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];
        }

        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }

    if (secondLowest == std::numeric_limits<int>::max()) {
        std::cout << "There is no second lowest element." << std::endl;
    } else {
        std::cout << "The second lowest element is: " << secondLowest << std::endl;
    }

    if (secondHighest == std::numeric_limits<int>::min()) {
        std::cout << "There is no second highest element." << std::endl;
    } else {
        std::cout << "The second highest element is: " << secondHighest << std::endl;
    }

    return 0;
}