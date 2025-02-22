#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;

    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    // Check 0or1
    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Invalid input. Please enter an 8-bit binary number (0s and 1s only)." << endl;
        return 1;
    }

    string onesComplement = binary;
    for (char &bit : onesComplement) {
        bit = (bit == '0') ? '1' : '0';
    }

    // Calculate two's complement
    string twosComplement = onesComplement;
    for (int i = 7; i >= 0; i--) {
        if (twosComplement[i] == '0') {
            twosComplement[i] = '1';
            break;
        } else {
            twosComplement[i] = '0';
        }
    }

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the value = " << onesComplement << endl;
    cout << "After two's complement the value = " << twosComplement << endl;

    return 0;
}