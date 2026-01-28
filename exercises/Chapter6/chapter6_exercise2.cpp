#include "chapter6_exercise2.h"
#include <iostream>
#include <conio.h>   // for getche()

using namespace std;

// Class representing a toll booth
class tollBooth {
private:
    unsigned int cars;   // number of cars passed
    double money;        // total money collected

public:
    // Constructor initializes values to zero
    tollBooth() : cars(0), money(0.0) {}

    // Car that pays the toll
    void payingCar() {
        cars++;
        money += 0.50;
    }

    // Car that does not pay
    void nopayCar() {
        cars++;
    }

    // Display current statistics
    void display() const {
        cout << "\nTotal cars: " << cars << endl;
        cout << "Total money collected: $" << money << endl;
    }
};

void chapter6_exercise2() {
    tollBooth booth;
    char choice;

    cout << "Press 'p' for paying car\n";
    cout << "Press 'n' for non-paying car\n";
    cout << "Press ESC to exit\n";

    while (true) {
        choice = _getche();

        if (choice == 'p') {
            booth.payingCar();
        }
        else if (choice == 'n') {
            booth.nopayCar();
        }
        else if (choice == 27) { // ESC key
            break;
        }
    }

    booth.display();
}
