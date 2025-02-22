#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimal;
    string binary = "";

    cout << "Input a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        binary = "0";
    }

    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary; 
        decimal /= 2; 
    }

    cout << "The binary number is: " << binary << endl;

    return 0;
}