#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    float marks;

public:
    void setStudentInfo(const std::string& studentName, const std::string& studentClass, int rollNum, float studentMarks) {
        name = studentName;
        this->studentClass = studentClass;
        rollNumber = rollNum;
        marks = studentMarks;
    }

    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    Student student;
    std::string name, studentClass;
    int rollNumber;
    float marks;

    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    std::cout << "Enter class: ";
    std::getline(std::cin, studentClass);
    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> marks;

    student.setStudentInfo(name, studentClass, rollNumber, marks);
    student.displayInfo();

    return 0;
}