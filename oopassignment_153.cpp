#include <iostream>
using namespace std;

// Function to calculate the digital root of a number
int digitalRoot(int num) {
    while (num >= 10) { 
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;       
        }
        num = sum; 
    }
    return num;
}

int main() {
    int number;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1; 
    }

    // Calculate the digital root
    int result = digitalRoot(number);

    cout << "The digital root is: " << result << endl;

    return 0;
}