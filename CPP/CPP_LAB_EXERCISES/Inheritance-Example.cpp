#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Function to input person details
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display person details
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student inheriting from Person
class Student : public Person {
private:
    int studentID;
    string course;

public:
    void getStudentData() {
        getData(); // reuse function from base class
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter course name: ";
        cin >> course;
    }

    void displayStudentData() {
        cout << "\n--- Student Details ---\n";
        displayData(); // reuse base class function
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher inheriting from Person
class Teacher : public Person {
private:
    int teacherID;
    string subject;

public:
    void getTeacherData() {
        getData(); // reuse function from base class
        cout << "Enter teacher ID: ";
        cin >> teacherID;
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacherData() {
        cout << "\n--- Teacher Details ---\n";
        displayData(); // reuse base class function
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Main function
 main() {
    Student s;
    Teacher t;

    cout << "Enter student details:\n";
    s.getStudentData();

    cout << "\nEnter teacher details:\n";
    t.getTeacherData();

    // Display the data
    s.displayStudentData();
    t.displayTeacherData();

   
}

