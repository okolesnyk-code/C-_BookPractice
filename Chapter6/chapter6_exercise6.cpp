// chapter6_exercise6.cpp
#include "chapter6_exercise6.h"
#include <iostream>
#include <string>
using namespace std;

// Enumeration for employee type
enum etype { laborer, secretary, manager, accountant, executive, researcher };

// Class representing a date
class Date_exercise6 {
private:
    int month;
    int day;
    int year;

public:
    Date_exercise6() : month(0), day(0), year(0) {}

    void getdate() {
        char sep1, sep2;
        cout << "Enter hire date (MM/DD/YY): ";
        cin >> month >> sep1 >> day >> sep2 >> year;
    }

    void showdate() const {
        cout << (month < 10 ? "0" : "") << month << "/"
            << (day < 10 ? "0" : "") << day << "/"
            << (year < 10 ? "0" : "") << year;
    }
};

// Class representing an employee
class Employee {
private:
    int number;         // Employee number
    float salary;       // Employee salary
    etype status;       // Employee type
    Date_exercise6 hireDate;      // Date of hiring

public:
    // Input employee data
    void getemploy() {
        cout << "Enter employee number: ";
        cin >> number;
        cout << "Enter employee salary: ";
        cin >> salary;

        char firstLetter;
        cout << "Enter first letter of employee type "
            << "(laborer=l, secretary=s, manager=m, accountant=a, executive=e, researcher=r): ";
        cin >> firstLetter;

        switch (firstLetter) {
        case 'l': status = laborer; break;
        case 's': status = secretary; break;
        case 'm': status = manager; break;
        case 'a': status = accountant; break;
        case 'e': status = executive; break;
        case 'r': status = researcher; break;
        default:
            cout << "Invalid type! Defaulting to laborer.\n";
            status = laborer;
        }

        hireDate.getdate();
    }

    // Display employee data
    void putemploy() const {
        cout << "Employee number: " << number << endl;
        cout << "Salary: " << salary << endl;
        cout << "Employee type: ";
        switch (status) {
        case laborer: cout << "laborer"; break;
        case secretary: cout << "secretary"; break;
        case manager: cout << "manager"; break;
        case accountant: cout << "accountant"; break;
        case executive: cout << "executive"; break;
        case researcher: cout << "researcher"; break;
        }
        cout << endl;

        cout << "Hire date: ";
        hireDate.showdate();
        cout << endl;
    }
};

void chapter6_exercise6() {
    Employee emp1, emp2, emp3;

    cout << "--- Enter data for employee 1 ---\n";
    emp1.getemploy();
    cout << "--- Enter data for employee 2 ---\n";
    emp2.getemploy();
    cout << "--- Enter data for employee 3 ---\n";
    emp3.getemploy();

    cout << "\n--- Employee Information ---\n";
    emp1.putemploy();
    emp2.putemploy();
    emp3.putemploy();
}
