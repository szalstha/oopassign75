#include <iostream>
#include <ctime>
using namespace std;

int daysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2) {

    tm date1 = {0, 0, 0, day1, month1 - 1, year1 - 1900}; 
    tm date2 = {0, 0, 0, day2, month2 - 1, year2 - 1900};

    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    double difference = difftime(time2, time1);
    return static_cast<int>(difference / (60 * 60 * 24));
}

int main() {
    int year1, month1, day1;
    int year2, month2, day2;

    // Input the first date
    cout << "Enter the first date (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;

    // Input the second date
    cout << "Enter the second date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;

    int days = daysBetweenDates(year1, month1, day1, year2, month2, day2);

    cout << "Days between " << year1 << "/" << month1 << "/" << day1
         << " and " << year2 << "/" << month2 << "/" << day2
         << " = " << abs(days) << endl;

    return 0;
}