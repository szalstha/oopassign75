#include <iostream>
using namespace std;

int main() {
    int year, month;

    cout << "Input Year: ";
    cin >> year;
    cout << "Input Month: ";
    cin >> month;

    // Check if the month is valid
    if (month < 1 || month > 12) {
        cout << "Invalid month entered!" << endl;
        return 1; 
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; // February has 29 days in a leap year
    }

    cout << "Number of days of the year " << year << " and month " << month << " is: " << daysInMonth[month - 1] << endl;

    return 0;
}