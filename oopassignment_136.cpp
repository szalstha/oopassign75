#include <iostream>
using namespace std;

int main() {
    int num, reversedNumber = 0;

    cout << "Input a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10; 
        reversedNumber = reversedNumber * 10 + digit; 
        num = num / 10; 
    }

    cout << "The number in reverse order is: " << reversedNumber << endl;

    return 0;
}