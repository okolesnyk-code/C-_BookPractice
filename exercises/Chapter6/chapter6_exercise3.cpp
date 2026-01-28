#include "chapter6_exercise3.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Class representing time in hours, minutes and seconds
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor initializes time to 00:00:00
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor with specified values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Display time in format HH:MM:SS
    void display() const {
        cout << setfill('0')
            << setw(2) << hours << ":"
            << setw(2) << minutes << ":"
            << setw(2) << seconds << endl;
    }

    // Add two Time objects and return the result
    Time add(const Time& other) const {
        int totalSeconds =
            seconds + other.seconds +
            (minutes + other.minutes) * 60 +
            (hours + other.hours) * 3600;

        int h = totalSeconds / 3600;
        totalSeconds %= 3600;
        int m = totalSeconds / 60;
        int s = totalSeconds % 60;

        return Time(h, m, s);
    }
};

void chapter6_exercise3() {
    // Initialized objects can be const
    const Time t1(10, 45, 30);
    const Time t2(2, 20, 45);

    // Uninitialized object (uses default constructor)
    Time t3;

    // Add two times and store result
    t3 = t1.add(t2);

    cout << "Result time: ";
    t3.display();
}
