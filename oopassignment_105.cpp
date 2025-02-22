#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}