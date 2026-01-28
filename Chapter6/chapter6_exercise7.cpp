#include "chapter6_exercise7.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Class representing a geographic angle (latitude or longitude)
class Angle {
private:
    int degrees;     // Degrees
    float minutes;   // Minutes
    char direction;  // Direction: N, S, E, W

public:
    // Default constructor initializes to 0°0.0' N
    Angle() : degrees(0), minutes(0.0), direction('N') {}

    // Constructor with specified values
    Angle(int d, float m, char dir) : degrees(d), minutes(m), direction(dir) {}

    // Method to input angle from user
    void input() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    // Method to display the angle in format 149°34.8' W
    void display() const {
        cout << degrees << "\xF8" << fixed << setprecision(1)
            << minutes << "' " << direction << endl;
    }
};

void chapter6_exercise7() {
    // Create an angle using constructor
    Angle a1(149, 34.8f, 'W');
    cout << "Angle created with constructor: ";
    a1.display();

    // Loop to input and display user angles
    char choice;
    do {
        Angle a2;
        a2.input();
        cout << "You entered: ";
        a2.display();

        cout << "Do you want to enter another angle? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}
