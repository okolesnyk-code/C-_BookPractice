#include "chapter4_exercise4.h"
#include <iostream>

using namespace std;

struct employee
{
    int number;     
    float salary;   
};

void chapter4_exercise4()
{
    employee e1, e2, e3;

    // Ввід даних
    cout << "Enter employee number and salary:\n";

    cout << "Employee 1: ";
    cin >> e1.number >> e1.salary;

    cout << "Employee 2: ";
    cin >> e2.number >> e2.salary;

    cout << "Employee 3: ";
    cin >> e3.number >> e3.salary;

    // Вивід даних
    cout << "\nEmployee data:\n";

    cout << "Employee #" << e1.number << ", salary: " << e1.salary << endl;
    cout << "Employee #" << e2.number << ", salary: " << e2.salary << endl;
    cout << "Employee #" << e3.number << ", salary: " << e3.salary << endl;

}
