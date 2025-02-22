#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

void findLargestThree(int arr[], int size) {
    if (size < 3) {
        cout << "Array size is too small to find three largest elements." << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: "
         << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, size);

    return 0;
}