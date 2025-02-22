#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Input a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    cout << "The factors are: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " "; 
        }
    }

    cout << endl;
    return 0;
}