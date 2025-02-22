#include <iostream>
using namespace std;

// Function to check if a number is a power of three
bool isPowerOfThree(int num) {
    if (num < 1) {
        return false; 
    }

    while (num % 3 == 0) { 
        num /= 3;
    }

    return num == 1; 
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    bool result = isPowerOfThree(number);

    cout << (result ? "true" : "false") << endl;

    return 0;
}