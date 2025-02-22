#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;

    cout << "Enter a number: ";
    cin >> number;

    if (number.length() > 1) {
        char temp = number[0];
        number[0] = number[number.length() - 1];
        number[number.length() - 1] = temp;
    }

    cout << "Number after swapping first and last digits: " << number << endl;

    return 0;
}