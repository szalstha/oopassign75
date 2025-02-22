#include <iostream>
#include <string>

int main() {

    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input; 

    std::string reversed;

    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i]; 
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}