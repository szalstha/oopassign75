#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int cube = i * i * i; 
        cout << "Number is: " << i << " and the cube of " << i << " is: " << cube << endl;
    }

    return 0;
}