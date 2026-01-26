#include <iostream>
using namespace std;

// Structure to store time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

void chapter4_exercise9() {

    Time t1;
    long totalSecs;

    // Ask the user to enter time values
    cout << "Enter hours: ";
    cin >> t1.hours;

    cout << "Enter minutes: ";
    cin >> t1.minutes;

    cout << "Enter seconds: ";
    cin >> t1.seconds;

    // Calculate total seconds
    totalSecs = t1.hours * 3600
        + t1.minutes * 60
        + t1.seconds;

    // Output the result
    cout << "Total seconds: " << totalSecs << endl;

    
}
