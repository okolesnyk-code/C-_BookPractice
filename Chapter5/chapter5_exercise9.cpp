#include "chapter5_exercise9.h"
#include <iostream>
using namespace std;

// Structure from previous exercise
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function declaration
void swap(Time& t1, Time& t2);

// Exercise function
void chapter5_exercise9()
{
    Time t1, t2;

    // Input first time
    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    // Input second time
    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    cout << "\nBefore swap:" << endl;
    cout << "Time 1: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;
    cout << "Time 2: " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << endl;

    swap(t1, t2); // call swap function

    cout << "\nAfter swap:" << endl;
    cout << "Time 1: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;
    cout << "Time 2: " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << endl;
}

// Function definition
void swap(Time& t1, Time& t2)
{
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}
