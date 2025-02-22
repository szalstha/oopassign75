#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}