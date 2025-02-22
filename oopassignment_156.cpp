#include <iostream>
using namespace std;

int main() {
    int number, product = 1;

    cout << "Input a number: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        int digit = number % 10; 
        product *= digit;      
        number /= 10;           
    }

    cout << "The product of digits is: " << product << endl;

    return 0;
}