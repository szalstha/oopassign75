#include <iostream>
using namespace std;

int main() {
    int start, n, difference, sum = 0, term;

    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> difference;

    cout << "The Sum of the A.P. series are:" << endl;
    term = start;
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term; 
        term += difference; 
    }
    // Display the sum
    cout << " = " << sum << endl;

    return 0;
}