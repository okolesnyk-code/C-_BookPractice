#include "chapter6_exercise9.h"
#include <iostream>

using namespace std;

// Class representing a fraction
class Fraction_exercise9 {
private:
    int numerator;   // Numerator of the fraction
    int denominator; // Denominator of the fraction

public:
    // Default constructor initializes fraction to 0/1
    Fraction_exercise9() : numerator(0), denominator(1) {}

    // Method to input fraction in form n/d
    void getFraction() {
        char slash; // To read the '/' character
        cout << "Enter fraction (numerator/denominator): ";
        cin >> numerator >> slash >> denominator;

        // Basic check for denominator
        if (denominator == 0) {
            cout << "Denominator cannot be zero. Setting to 1." << endl;
            denominator = 1;
        }
    }

    // Method to display fraction in form n/d
    void showFraction() const {
        cout << numerator << "/" << denominator;
    }

    // Method to add two fractions and return the result
    Fraction_exercise9 add(const Fraction_exercise9& other) const {
        Fraction_exercise9 result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }
};

void chapter6_exercise9() {
    char choice;

    do {
        Fraction_exercise9 f1, f2, sum;

        // Input two fractions
        f1.getFraction();
        f2.getFraction();

        // Calculate sum
        sum = f1.add(f2);

        // Display result
        cout << "Sum of ";
        f1.showFraction();
        cout << " and ";
        f2.showFraction();
        cout << " is ";
        sum.showFraction();
        cout << endl;

        // Ask user whether to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}
