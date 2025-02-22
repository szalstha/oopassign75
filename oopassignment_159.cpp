#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sumPrimes(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (isPrime(start)) {
        return start + sumPrimes(start + 1, end);
    }
    return sumPrimes(start + 1, end);
}

int main() {
    int start, end;

    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    int primeSum = sumPrimes(start, end);

    std::cout << "Sum of prime numbers in the range [" << start << ", " << end << "] is: " << primeSum << std::endl;

    return 0;
}