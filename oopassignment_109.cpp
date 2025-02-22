#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

    bool isValidDate(int d, int m, int y) {
        if (y < 1) return false; 
        if (m < 1 || m > 12) return false; 
        if (d < 1 || d > 31) return false; 

        // Check for months with 30 days
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            if (d > 30) return false;
        }

        // Check for February
        if (m == 2) {
            bool isLeapYear = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
            if (isLeapYear) {
                if (d > 29) return false; // Leap year
            } else {
                if (d > 28) return false; // Non-leap year
            }
        }

        return true;
    }

public:
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            std::cout << "Invalid date!" << std::endl;
        }
    }

    void getDate() const {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date;
    int day, month, year;

    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;

    date.setDate(day, month, year);
    date.getDate();

    return 0;
}