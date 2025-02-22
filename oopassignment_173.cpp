#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Enter the size of the matrix (n): ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "The matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}