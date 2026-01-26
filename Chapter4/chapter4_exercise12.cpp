#include "chapter4_exercise12.h"
#include <iostream>
using namespace std;

// =====================
// Data structure
// =====================
struct Fraction {
    int numerator;
    int denominator;
};

// =====================
// Function declarations
// =====================
Fraction inputFraction();
Fraction add(Fraction a, Fraction b);
Fraction subtract(Fraction a, Fraction b);
Fraction multiply(Fraction a, Fraction b);
Fraction divide(Fraction a, Fraction b);

void chapter4_exercise12();

// =====================
// Main exercise function
// =====================
void chapter4_exercise12() {

    Fraction f1, f2, result;
    char operation;

    cout << "Enter first fraction (a/b): ";
    f1 = inputFraction();

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second fraction (a/b): ";
    f2 = inputFraction();

    switch (operation) {
    case '+': result = add(f1, f2); break;
    case '-': result = subtract(f1, f2); break;
    case '*': result = multiply(f1, f2); break;
    case '/': result = divide(f1, f2); break;
    default:
        cout << "Invalid operation!" << endl;
        return;
    }

    cout << "Result: "
        << result.numerator << "/"
        << result.denominator << endl;
}

// =====================
// Helper function implementations
// =====================
Fraction inputFraction() {
    Fraction f;
    char slash;
    cin >> f.numerator >> slash >> f.denominator;
    return f;
}

Fraction add(Fraction a, Fraction b) {
    return {
        a.numerator * b.denominator + b.numerator * a.denominator,
        a.denominator * b.denominator
    };
}

Fraction subtract(Fraction a, Fraction b) {
    return {
        a.numerator * b.denominator - b.numerator * a.denominator,
        a.denominator * b.denominator
    };
}

Fraction multiply(Fraction a, Fraction b) {
    return {
        a.numerator * b.numerator,
        a.denominator * b.denominator
    };
}

Fraction divide(Fraction a, Fraction b) {
    return {
        a.numerator * b.denominator,
        a.denominator * b.numerator
    };
}
