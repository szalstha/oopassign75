#include <iostream>
using namespace std;

int integerSqrt(int n) {
    if (n < 2) {
        return n; 
    }

    int result = 1;
    while (result * result <= n) {
        result++;
    }
    return result - 1; 
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; 
    }

    int sqrtVal = integerSqrt(n);


    cout << "Square root of " << n << " = " << sqrtVal << endl;

    return 0;
}