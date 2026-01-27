#include "chapter5_exercise4.h"
#include <iostream>
using namespace std;

// Structure to represent distance
struct Distance
{
    int feet;
    float inches;
};

// Function declaration
Distance maxDistance(const Distance& d1, const Distance& d2);

// Exercise function
void chapter5_exercise4()
{
    Distance dist1, dist2;

    cout << "Enter first distance (feet inches): ";
    cin >> dist1.feet >> dist1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> dist2.feet >> dist2.inches;

    Distance larger = maxDistance(dist1, dist2);

    cout << "The larger distance is: "
        << larger.feet << " feet " << larger.inches << " inches" << endl;
}

// Function definition
Distance maxDistance(const Distance& d1, const Distance& d2)
{
    // Convert both distances to total inches for comparison
    float totalInches1 = d1.feet * 12.0f + d1.inches;
    float totalInches2 = d2.feet * 12.0f + d2.inches;

    if (totalInches1 >= totalInches2)
        return d1;
    else
        return d2;
}
