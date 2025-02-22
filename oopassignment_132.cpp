#include <iostream>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    void setSides(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    std::string getType() const {
        if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
            return "Invalid triangle sides.";
        }
        if (side1 == side2 && side2 == side3) {
            return "Equilateral";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles";
        } else {
            return "Scalene";
        }
    }
};

int main() {
    Triangle triangle;
    double s1, s2, s3;

    std::cout << "Enter the lengths of the three sides of the triangle:\n";
    std::cout << "Side 1: ";
    std::cin >> s1;
    std::cout << "Side 2: ";
    std::cin >> s2;
    std::cout << "Side 3: ";
    std::cin >> s3;

    triangle.setSides(s1, s2, s3);
    std::cout << "The triangle is: " << triangle.getType() << std::endl;

    return 0;
}