#include <iostream>
#include <string>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convertToWords(int num) {
    if (num == 0) return "Zero"; 

    string result = "";

    if (num >= 100) {
        result += ones[num / 100] + " Hundred ";
        num %= 100;
    }

    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        result += teens[num - 10] + " ";
        num = 0;
    }

    if (num > 0) {
        result += ones[num] + " ";
    }

    return result;
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    string words = convertToWords(number);

    cout << "In words: " << words << endl;

    return 0;
}