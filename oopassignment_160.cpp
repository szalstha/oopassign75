#include <iostream>
using namespace std;

int integerSqrt(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int left = 1, right = n, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= n / mid) {
            left = mid + 1;
            result = mid;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int sqrtValue = integerSqrt(n);
    cout << "Square root of " << n << " = " << sqrtValue << endl;

    return 0;
}