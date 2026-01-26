#include "chapter4_exercise7.h"
#include <iostream>
using namespace std;

// enum from exercise 6
enum etype { laborer, secretary, manager, accountant, executive, researcher };

// struct from exercise 5
struct date {
    int day;
    int month;
    int year;
};

// struct from exercise 4 + additions
struct employee {
    int number;
    double salary;
    etype position;
    date hireDate;
};

void chapter4_exercise7() {
    employee e1, e2, e3;
    char posChar;
    char slash1, slash2;

    // ---------- Employee 1 ----------
    cout << "Enter employee number: ";
    cin >> e1.number;

    cout << "Enter salary: ";
    cin >> e1.salary;

    cout << "Enter first letter of position (l, s, m, a, e, r): ";
    cin >> posChar;

    switch (posChar) {
    case 'l': e1.position = laborer; break;
    case 's': e1.position = secretary; break;
    case 'm': e1.position = manager; break;
    case 'a': e1.position = accountant; break;
    case 'e': e1.position = executive; break;
    case 'r': e1.position = researcher; break;
    }

    cout << "Enter hire date (dd/mm/yyyy): ";
    cin >> e1.hireDate.day >> slash1
        >> e1.hireDate.month >> slash2
        >> e1.hireDate.year;

    // ---------- Employee 2 ----------
    cout << "\nEnter employee number: ";
    cin >> e2.number;

    cout << "Enter salary: ";
    cin >> e2.salary;

    cout << "Enter first letter of position (l, s, m, a, e, r): ";
    cin >> posChar;

    switch (posChar) {
    case 'l': e2.position = laborer; break;
    case 's': e2.position = secretary; break;
    case 'm': e2.position = manager; break;
    case 'a': e2.position = accountant; break;
    case 'e': e2.position = executive; break;
    case 'r': e2.position = researcher; break;
    }

    cout << "Enter hire date (dd/mm/yyyy): ";
    cin >> e2.hireDate.day >> slash1
        >> e2.hireDate.month >> slash2
        >> e2.hireDate.year;

    // ---------- Employee 3 ----------
    cout << "\nEnter employee number: ";
    cin >> e3.number;

    cout << "Enter salary: ";
    cin >> e3.salary;

    cout << "Enter first letter of position (l, s, m, a, e, r): ";
    cin >> posChar;

    switch (posChar) {
    case 'l': e3.position = laborer; break;
    case 's': e3.position = secretary; break;
    case 'm': e3.position = manager; break;
    case 'a': e3.position = accountant; break;
    case 'e': e3.position = executive; break;
    case 'r': e3.position = researcher; break;
    }

    cout << "Enter hire date (dd/mm/yyyy): ";
    cin >> e3.hireDate.day >> slash1
        >> e3.hireDate.month >> slash2
        >> e3.hireDate.year;

    // ---------- Output ----------
    employee employees[3] = { e1, e2, e3 };

    cout << "\nEmployee data:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Employee #" << employees[i].number << endl;
        cout << "Salary: " << employees[i].salary << endl;

        cout << "Position: ";
        switch (employees[i].position) {
        case laborer: cout << "laborer"; break;
        case secretary: cout << "secretary"; break;
        case manager: cout << "manager"; break;
        case accountant: cout << "accountant"; break;
        case executive: cout << "executive"; break;
        case researcher: cout << "researcher"; break;
        }
        cout << endl;

        cout << "Hire date: "
            << employees[i].hireDate.day << "/"
            << employees[i].hireDate.month << "/"
            << employees[i].hireDate.year << endl;

        cout << "---------------------\n";
    }

}
