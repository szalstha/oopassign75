#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int num;

    std::cout << "Input a number to find the last prime number occurs before the number: ";
    std::cin >> num;

    for (int i = num - 1; i >= 2; --i) {
        if (isPrime(i)) {
            std::cout << i << " is the last prime number before " << num << std::endl;
            break; 
        }
    }

    return 0;
}