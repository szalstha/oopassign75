#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < i; j++) {
            cout << " "; 
        }

        for (int j = 1; j <= rows - i; j++) {
            cout << j; 
        }

        cout << endl;
    }

    return 0;
}