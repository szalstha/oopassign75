#include <iostream>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) = 0
    } else if (n == 1) {
        return 1; // Base case: F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Fibonacci is not defined for negative numbers." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;
    }

    return 0;
}