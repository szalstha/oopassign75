#include <iostream>
using namespace std;

int main() {
    int n;
    long long term = 1, sum = 0;

    cout << "Input number of terms: ";
    cin >> n;

    cout << "The series is: ";
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term; 
        term = term * 10 + 1; 
    }

    cout << "\nThe sum of the series is: " << sum << endl;

    return 0;
}