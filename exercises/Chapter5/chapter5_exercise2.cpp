#include "chapter5_exercise2.h"
#include <iostream>
using namespace std;

// Function declaration (prototype)
double power_exercise2(double n, int p = 2);

// Exercise function
void chapter5_exercise2()
{
    double n;
    int p;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter power (or 0 to use default square): ";
    cin >> p;

    double result;

    if (p == 0)
        result = power_exercise2(n);        // uses default power = 2
    else
        result = power_exercise2(n, p);

    cout << "Result: " << result << endl;
}

// Function definition
double power_exercise2(double n, int p)
{
    double result = 1.0;

    for (int i = 0; i < p; i++)
        result *= n;

    return result;
}
