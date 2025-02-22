#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the number of terms
    cout << "Input number of terms to display: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Here is the Fibonacci series upto " << n << " terms:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << first << " "; 

        int next = first + second;
        first = second; 
        second = next; 
    }

    cout << endl; 
    return 0;
}