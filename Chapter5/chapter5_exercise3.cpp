#include "chapter5_exercise3.h"
#include <iostream>
using namespace std;

// Function declaration
void zeroSmaller(int& a, int& b);

// Exercise function
void chapter5_exercise3()
{
    int x, y;

    cout << "Enter first integer: ";
    cin >> x;

    cout << "Enter second integer: ";
    cin >> y;

    zeroSmaller(x, y);

    cout << "After zeroSmaller() call:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
}

// Function definition
void zeroSmaller(int& a, int& b)
{
    if (a < b)
        a = 0;
    else
        b = 0;
}
