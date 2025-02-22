#include <iostream>
#include <vector>

std::vector<int> findSmallerThanNeighbors(const std::vector<int>& vec) {
    std::vector<int> result;

    for (size_t i = 1; i < vec.size() - 1; ++i) {

        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> vec;
    int n, element;

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    if (n < 3) {
        std::cout << "Please enter at least 3 elements to compare neighbors." << std::endl;
        return 1;
    }

    std::cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        vec.push_back(element);
    }

    std::cout << "Original Vector elements:\n";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> smallerElements = findSmallerThanNeighbors(vec);

    std::cout << "Vector elements that are smaller than their adjacent neighbours:\n";
    for (int num : smallerElements) {
        std::cout << num << std::endl;
    }

    return 0;
}