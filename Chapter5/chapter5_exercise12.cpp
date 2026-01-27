#include "chapter5_exercise12.h"
#include <iostream>
using namespace std;

// Structure to store a fraction
struct fraction {
    int numerator;
    int denominator;
};

// Function to add two fractions
fraction fadd(fraction f1, fraction f2) {
    fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

// Function to subtract two fractions
fraction fsub(fraction f1, fraction f2) {
    fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

// Function to multiply two fractions
fraction fmul(fraction f1, fraction f2) {
    fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

// Function to divide two fractions
fraction fdiv(fraction f1, fraction f2) {
    fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return result;
}

// Function to display a fraction
void displayFraction(fraction f) {
    cout << f.numerator << "/" << f.denominator << endl;
}

// Exercise function
void chapter5_exercise12() {
    fraction f1, f2;

    cout << "Enter first fraction (numerator denominator): ";
    cin >> f1.numerator >> f1.denominator;

    cout << "Enter second fraction (numerator denominator): ";
    cin >> f2.numerator >> f2.denominator;

    cout << "Sum: ";
    displayFraction(fadd(f1, f2));

    cout << "Difference: ";
    displayFraction(fsub(f1, f2));

    cout << "Product: ";
    displayFraction(fmul(f1, f2));

    cout << "Quotient: ";
    displayFraction(fdiv(f1, f2));
}
