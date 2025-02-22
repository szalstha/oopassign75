#include <iostream>
#include <vector>

int countOccurrences(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;

    // Find the first occurrence of the target
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            // Found the target, now count occurrences
            count++;
            int temp = mid;

            // Count occurrences to the left
            while (--temp >= 0 && arr[temp] == target) {
                count++;
            }

            // Count occurrences to the right
            temp = mid;
            while (++temp < arr.size() && arr[temp] == target) {
                count++;
            }
            break;
        }
    }

    return count;
}

int main() {
    int n, target;
    std::cout << "Enter the number of elements in the sorted array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array must contain at least one element." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " sorted integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number to count occurrences: ";
    std::cin >> target;

    int occurrences = countOccurrences(arr, target);
    std::cout << "The number " << target << " occurs " << occurrences << " times in the array." << std::endl;

    return 0;
}