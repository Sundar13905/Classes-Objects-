# Classes and Objects (OOP CONCEPT)

# Experiment 11 - To study and implement Classes and Objects

## Aim: - 
To run and execute a code using objects and classes in C++

## Theory : -
In C++ (an object-oriented programming language, or OOP), a **class** is a blueprint that defines the properties (data) and behaviors (methods) of objects. 
An **object** is an instance of a class, representing a specific entity that can hold data and interact with other objects using the methods defined in its class.

### Advantages of Classes and Objects in C++:

1. **Encapsulation:** Classes bundle data and methods, hiding internal implementation details and exposing only necessary parts, which promotes modularity and reduces complexity.

2. **Reusability:** Classes can be reused to create multiple objects, reducing code duplication and improving maintainability.

3. **Inheritance:** Classes can inherit properties and methods from other classes, facilitating code reuse and the creation of hierarchical relationships.

4. **Polymorphism:** Allows objects to be treated as instances of their parent class, enabling flexibility in code and the ability to use objects of different classes interchangeably.

5. **Abstraction:** Classes allow you to model complex systems by abstracting real-world entities into objects, making code easier to understand and manage.

### Disadvantages of Classes and Objects in C++:

1. **Overhead:** The abstraction provided by classes can introduce additional memory and performance overhead compared to procedural programming.

2. **Complexity:** Designing a robust class hierarchy can be complex and may lead to difficulties in understanding and maintaining the code.

3. **Inheritance Issues:** Improper use of inheritance can lead to problems like the diamond problem, where ambiguities arise in multiple inheritance scenarios.

4. **Memory Management:** Manual memory management in C++ can lead to issues such as memory leaks or dangling pointers if not handled properly within classes.

### Applications of Classes and Objects in C++ (OOP):

1. **Software Development:** Classes and objects are used to model real-world entities and behaviors, making complex software systems more manageable, modular, and scalable.

2. **Game Development:** Objects represent game entities (like players, enemies, and items), and classes define their properties and behaviors, allowing for rich, interactive environments.

3. **GUI Applications:** Classes are used to create graphical user interface components (like buttons, windows, and dialogs), encapsulating their properties and interactions.

4. **Simulation and Modeling:** Classes model real-world systems (like traffic, financial markets, or physical processes) to simulate behaviors and predict outcomes.

5. **Data Structures and Algorithms:** Classes encapsulate data structures (like linked lists, trees, and graphs) and algorithms, making them reusable and easy to maintain.

6. **Database Management Systems:** Classes represent database tables and records, enabling object-relational mapping (ORM) and easier data manipulation.

7. **Network Programming:** Objects represent network entities (like clients, servers, and connections), simplifying the development of communication protocols and distributed systems.

## Code 
~~~
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
~~~

## Code Output 
![](https://github.com/Sundar13905/Classes-Objects-/blob/main/oops_output.png)
