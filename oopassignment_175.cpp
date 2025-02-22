#include <iostream>

int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return start + sumEven(start + 1, end);
    }
    return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 != 0) {
        return start + sumOdd(start + 1, end);
    }
    return sumOdd(start + 1, end);
}

int main() {
    int start, end;

    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    int evenSum = sumEven(start, end);
    int oddSum = sumOdd(start, end);

    std::cout << "Sum of even numbers in the range [" << start << ", " << end << "] is: " << evenSum << std::endl;
    std::cout << "Sum of odd numbers in the range [" << start << ", " << end << "] is: " << oddSum << std::endl;

    return 0;
}