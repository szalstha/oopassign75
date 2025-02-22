#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;

    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    if (binary.length() != 8) {
        cout << "Please enter an 8-bit binary number." << endl;
        return 1;
    }

    string onesComplement = binary;
    for (int i = 0; i < 8; i++) {
        if (onesComplement[i] == '0') {
            onesComplement[i] = '1';
        } else if (onesComplement[i] == '1') {
            onesComplement[i] = '0';
        } else {
            cout << "Invalid binary input. Please enter only 0s and 1s." << endl;
            return 1;
        }
    }

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the number = " << onesComplement << endl;

    return 0;
}