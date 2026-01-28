// chapter6_exercise4.cpp
#include "chapter6_exercise4.h"
#include <iostream>
using namespace std;

// Class representing an employee
class Employee {
private:
    int id;        // Employee number
    float salary;  // Employee salary

public:
    // Default constructor initializes fields to zero
    Employee() : id(0), salary(0.0f) {}

    // Constructor with given values
    Employee(int i, float s) : id(i), salary(s) {}

    // Input employee data from user
    void input() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Display employee data
    void display() const {
        cout << "Employee ID: " << id << ", Salary: " << salary << endl;
    }
};

void chapter6_exercise4() {
    // Create three employee objects
    Employee emp1, emp2, emp3;

    // Input data for each employee
    cout << "Enter data for employee 1:\n";
    emp1.input();
    cout << "Enter data for employee 2:\n";
    emp2.input();
    cout << "Enter data for employee 3:\n";
    emp3.input();

    // Display all employee data
    cout << "\nEmployee information:\n";
    emp1.display();
    emp2.display();
    emp3.display();
}
