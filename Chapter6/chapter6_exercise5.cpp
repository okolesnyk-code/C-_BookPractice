// chapter6_exercise5.cpp
#include "chapter6_exercise5.h"
#include <iostream>
using namespace std;

// Class representing a date
class Date {
private:
    int month;
    int day;
    int year;

public:
    // Default constructor initializes date to 0/0/0
    Date() : month(0), day(0), year(0) {}

    // Constructor with given values
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    // Method to input date in format MM/DD/YY
    void getdate() {
        char sep1, sep2; // separators '/'
        cout << "Enter date (MM/DD/YY): ";
        cin >> month >> sep1 >> day >> sep2 >> year;
        // Optional: could check that sep1 and sep2 are '/'
    }

    // Display date in format MM/DD/YY
    void showdate() const {
        cout << (month < 10 ? "0" : "") << month << "/"
            << (day < 10 ? "0" : "") << day << "/"
            << (year < 10 ? "0" : "") << year << endl;
    }
};

void chapter6_exercise5() {
    // Create a date object
    Date d1;

    // Input date from user
    d1.getdate();

    // Display date
    cout << "The entered date is: ";
    d1.showdate();
}
