#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

    std::cout << "Enter First and Last Name: ";
    std::cin >> firstName >> lastName;

    std::cout << "Name in reverse is: " << lastName << " " << firstName << std::endl;

    return 0;
}
