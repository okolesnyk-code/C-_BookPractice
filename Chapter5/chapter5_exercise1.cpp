#include "chapter5_exercise1.h"
#include <iostream>
using namespace std;

// Function declaration (prototype)
float circarea(float radius);

// Exercise function
void chapter5_exercise1()
{
    float radius;

    cout << "Enter circle radius: ";
    cin >> radius;

    float area = circarea(radius);

    cout << "Circle area: " << area << endl;
}

// Function definition
float circarea(float radius)
{
    const float PI = 3.14159f;
    return PI * radius * radius;
}
