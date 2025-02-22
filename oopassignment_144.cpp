#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    int count = 0;
    for (int temp = sum; temp != 0; temp /= 10) {
        count++;
    }

    if (sum == 0) count = 1;

    cout << "Number of digits in the sum: " << count << endl;

    return 0;
}