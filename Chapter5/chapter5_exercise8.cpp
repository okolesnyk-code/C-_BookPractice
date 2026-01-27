#include "chapter5_exercise8.h"
#include <iostream>
using namespace std;

// Function declaration
void swap(int& a, int& b);

// Exercise function
void chapter5_exercise8()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y); // call the swap function

    cout << "After swap: x = " << x << ", y = " << y << endl;
}

// Function definition
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
