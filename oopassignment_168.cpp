#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimal;
    string hexadecimal = "";

    cout << "Input a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        hexadecimal = "0";
    }

    while (decimal > 0) {
        int remainder = decimal % 16; 
        char hexDigit;

        if (remainder < 10) {
            hexDigit = '0' + remainder;
        } else {
            hexDigit = 'A' + (remainder - 10); 
        }

        hexadecimal = hexDigit + hexadecimal; 
        decimal /= 16; 
    }

    cout << "The hexadecimal number is: " << hexadecimal << endl;

    return 0;
}