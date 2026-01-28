#include "chapter6_exercise8.h"
#include <iostream>

using namespace std;

// Class that tracks the sequential number of each object
class Numbered {
private:
    int id;                     // Object's individual number
    static int objectCount;     // Total number of objects created (shared by all objects)

public:
    // Constructor assigns sequential number
    Numbered() {
        objectCount++;   // Increment total count
        id = objectCount; // Assign sequential ID to this object
    }

    // Method to display the object's number
    void showNumber() const {
        cout << "My sequential number: " << id << endl;
    }
};

// Initialize static field outside the class
int Numbered::objectCount = 0;

void chapter6_exercise8() {
    // Create three objects
    Numbered obj1, obj2, obj3;

    // Display their sequential numbers
    obj1.showNumber();
    obj2.showNumber();
    obj3.showNumber();
}
