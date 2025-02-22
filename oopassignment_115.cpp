#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(const std::string& empName, int empID) 
        : name(empName), employeeID(empID), salary(0.0) {}

    void setSalary(double baseSalary, double performanceRating) {
        if (performanceRating < 0 || performanceRating > 1) {
            std::cout << "Performance rating must be between 0 and 1." << std::endl;
            return;
        }
        salary = baseSalary + (baseSalary * performanceRating);
    }

    void displayInfo() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    std::string name;
    int id;
    double baseSalary, performanceRating;

    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);
    std::cout << "Enter employee ID: ";
    std::cin >> id;
    std::cout << "Enter base salary: ";
    std::cin >> baseSalary;
    std::cout << "Enter performance rating (0 to 1): ";
    std::cin >> performanceRating;

    Employee emp(name, id);
    emp.setSalary(baseSalary, performanceRating);
    emp.displayInfo();

    return 0;
}