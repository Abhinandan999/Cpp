#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor for Person
    Person(string name = "", int age = 0) : name(name), age(age) {}

    // Function to input person data
    void inputPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Ignore leftover newline character
    }

    // Function to display person data
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int studentID;
    float grade;

public:
    // Constructor for Student
    Student(string name = "", int age = 0, int studentID = 0, float grade = 0.0)
        : Person(name, age), studentID(studentID), grade(grade) {}

    // Function to input student data
    void inputStudentDetails() {
        inputPersonDetails();  // Call base class method to input name and age
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter grade: ";
        cin >> grade;
    }

    // Function to display student data
    void displayStudentDetails() {
        displayPersonDetails();  // Call base class method to display name and age
        cout << "Student ID: " << studentID << endl;
        cout << "Grade: " << grade << endl;
    }
};

// Main function
int main() {
    Student student;
    
    // Input student details
    cout << "Enter student details: " << endl;
    student.inputStudentDetails();

    // Display student details
    cout << "\nStudent Information: " << endl;
    student.displayStudentDetails();

    return 0;
}
