#include "chapter5_exercise5.h"
#include <iostream>
using namespace std;

// Function declaration: converts hours, minutes, seconds to total seconds
long hms_to_secs(int hours, int minutes, int seconds);

// Exercise function
void chapter5_exercise5()
{
    int h, m, s;
    char choice;

    do
    {
        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;

        long totalSecs = hms_to_secs(h, m, s);

        cout << "Total seconds: " << totalSecs << endl;

        cout << "Do you want to enter another time? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}

// Function definition
long hms_to_secs(int hours, int minutes, int seconds)
{
    return hours * 3600L + minutes * 60L + seconds;
}
