#include <iostream>
#include <string>
using namespace std;

string removeChar(const string& str, char ch) {
    string result;
    for (char c : str) {
        if (c != ch) { 
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    char charToRemove;

    cout << "Enter a string: ";
    getline(cin, input); 

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    string updatedString = removeChar(input, charToRemove);

    cout << "Updated string: " << updatedString << endl;

    return 0;
}