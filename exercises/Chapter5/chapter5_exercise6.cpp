#include "chapter5_exercise6.h"
#include <iostream>
using namespace std;

// Structure to store time
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// Function declarations
long time_to_secs(const Time& t);   // Converts a time struct to total seconds
Time secs_to_time(long totalSecs);  // Converts total seconds to a time struct

// Exercise function
void chapter5_exercise6()
{
    Time t1, t2, sumTime;

    // Input first time
    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    // Input second time
    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    // Convert both times to seconds and sum
    long totalSecs = time_to_secs(t1) + time_to_secs(t2);

    // Convert the sum back to time format
    sumTime = secs_to_time(totalSecs);

    cout << "Sum of times: "
        << sumTime.hours << " hours "
        << sumTime.minutes << " minutes "
        << sumTime.seconds << " seconds" << endl;
}

// Function definitions
long time_to_secs(const Time& t)
{
    return t.hours * 3600L + t.minutes * 60L + t.seconds;
}

Time secs_to_time(long totalSecs)
{
    Time t;
    t.hours = totalSecs / 3600;
    totalSecs %= 3600;
    t.minutes = totalSecs / 60;
    t.seconds = totalSecs % 60;
    return t;
}
