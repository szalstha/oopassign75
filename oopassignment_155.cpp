#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    int decimal = 0;
    int power = 1; 

    cout << "Input a binary number: ";
    cin >> binary;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power; 
        } else if (binary[i] != '0') {
            cout << "Invalid binary input. Please enter only 0s and 1s." << endl;
            return 1;
        }
        power *= 2; 
    }

    cout << "The decimal number: " << decimal << endl;

    return 0;
}