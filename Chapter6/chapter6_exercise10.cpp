#include "chapter6_exercise10.h"
#include <iostream>

using namespace std;

// Class representing a coordinate (angle)
class Angle {
private:
    int degrees;
    float minutes;
    char direction; // N, S, E, W

public:
    // Default constructor
    Angle() : degrees(0), minutes(0.0f), direction('N') {}

    // Constructor with parameters
    Angle(int d, float m, char dir) : degrees(d), minutes(m), direction(dir) {}

    // Method to input an angle
    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    // Method to display angle
    void showAngle() const {
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};

// Class representing a ship
class Ship {
private:
    int shipNumber;       // Sequential number of the ship
    static int count;     // Static field to count ships
    Angle latitude;       // Latitude of ship
    Angle longitude;      // Longitude of ship

public:
    // Constructor increments count and assigns shipNumber
    Ship() {
        count++;
        shipNumber = count;
    }

    // Method to input ship data
    void getShip() {
        cout << "Entering data for ship #" << shipNumber << endl;
        cout << "Latitude:" << endl;
        latitude.getAngle();
        cout << "Longitude:" << endl;
        longitude.getAngle();
    }

    // Method to display ship data
    void putShip() const {
        cout << "Ship #" << shipNumber << " position:" << endl;
        cout << "Latitude: ";
        latitude.showAngle();
        cout << ", Longitude: ";
        longitude.showAngle();
        cout << endl;
    }
};

// Initialize static member
int Ship::count = 0;

void chapter6_exercise10() {
    Ship s1, s2, s3;

    // Input data for three ships
    s1.getShip();
    s2.getShip();
    s3.getShip();

    // Display the data
    cout << endl << "Ship information:" << endl;
    s1.putShip();
    s2.putShip();
    s3.putShip();
}
