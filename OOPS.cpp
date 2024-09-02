#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Method to set student details
    void setDetails(std::string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
        calculateGrade();
    }

    // Method to calculate grade based on marks
    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 75 ) {
            grade = 'B';
        } else if (marks >= 60) {
            grade = 'C';
        } else if (marks >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    // Method to display student details
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    // Creating a student object and setting details
    Student student1;
    student1.setDetails("Sundar", 136, 85.5);
    student1.display();

    std::cout << std::endl;

    // Creating another student object and setting details
    Student student2;
    student2.setDetails("Sunidhi", 137, 72.0);
    student2.display();

    return 0;
}
