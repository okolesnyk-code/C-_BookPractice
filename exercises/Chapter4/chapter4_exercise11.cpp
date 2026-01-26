#include "chapter4_exercise11.h"
#include <iostream>
using namespace std;

// Structure to store time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Convert time to total seconds
long timeToSeconds(Time t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Convert total seconds to time structure
Time secondsToTime(long totalSeconds) {
    Time t;

    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;

    return t;
}

void chapter4_exercise11() {

    Time t1, t2, result;
    long totalSeconds;

    // Input first time
    cout << "Enter first time (HH:MM:SS): ";
    cin >> t1.hours;
    cin.ignore(1, ':');
    cin >> t1.minutes;
    cin.ignore(1, ':');
    cin >> t1.seconds;

    // Input second time
    cout << "Enter second time (HH:MM:SS): ";
    cin >> t2.hours;
    cin.ignore(1, ':');
    cin >> t2.minutes;
    cin.ignore(1, ':');
    cin >> t2.seconds;

    // Convert both times to seconds and add them
    totalSeconds = timeToSeconds(t1) + timeToSeconds(t2);

    // Convert total seconds back to time format
    result = secondsToTime(totalSeconds);

    // Output result
    cout << "Sum of times: "
        << result.hours << ":"
        << result.minutes << ":"
        << result.seconds << endl;
}
