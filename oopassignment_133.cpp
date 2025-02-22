#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}