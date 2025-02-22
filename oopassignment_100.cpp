#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = i + 1; j <= rows; j++) {
            cout << j; 
        }

        cout << endl;
    }

    return 0;
}