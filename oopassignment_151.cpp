#include <iostream>
#include <algorithm>

int main() {
    int numbers[100]; // Array to store numbers
    int count = 0;

    std::cout << "Enter numbers (enter -1 to stop): ";
    while (true) {
        int num;
        std::cin >> num;
        if (num == -1) break; // Stop input if -1 is entered
        numbers[count++] = num;
    }

    if (count < 3) {
        std::cout << "You need to enter at least 3 numbers." << std::endl;
        return 1;
    }

    std::sort(numbers, numbers + count, std::greater<int>());

    std::cout << "The three highest numbers are: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}