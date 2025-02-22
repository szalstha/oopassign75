#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;         
    }
    return sum;
}

int sumDigitsBetween(int start, int end) {
    int totalSum = 0;
    for (int i = start; i <= end; ++i) {
        totalSum += sumDigits(i); 
    }
    return totalSum;
}

int main() {
    int start, end;

    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    int result = sumDigitsBetween(start, end);
    cout << "The sum of all digits between " << start << " and " << end << " is: " << result << endl;

    return 0;
}
