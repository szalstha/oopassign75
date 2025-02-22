#include <iostream>
using namespace std;

int main() {
    int upperLimit;

    cout << "Input the upper limit: ";
    cin >> upperLimit;

    cout << "The non-prime numbers are:" << endl;

    for (int i = 2; i <= upperLimit; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }

        if (!isPrime) {
            cout << i << " ";
        }
    }

    cout << endl; 
    return 0;
}