#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) { 
            cout << i << " "; 
            sum += i; 
        }
    }

    cout << "\nThe sum: " << sum << endl;

    return 0;
}