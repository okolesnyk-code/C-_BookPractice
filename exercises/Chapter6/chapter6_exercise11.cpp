#include "chapter6_exercise11.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Constructors
Fraction::Fraction() : num(0), den(1) {}

Fraction::Fraction(long n, long d) : num(n), den(d) {
    if (den == 0) {
        cout << "Denominator cannot be zero!" << endl;
        exit(1);
    }
    lowterms();
}

// Input
void Fraction::getFraction() {
    char slash;
    cin >> num >> slash >> den;
    if (den == 0) {
        cout << "Denominator cannot be zero!" << endl;
        exit(1);
    }
    lowterms();
}

// Output
void Fraction::showFraction() const {
    cout << num << "/" << den;
}

// Reduce fraction
void Fraction::lowterms() {
    long tnum = labs(num);
    long tden = labs(den);
    long temp;

    if (tden == 0) {
        cout << "Invalid denominator!" << endl;
        exit(1);
    }
    else if (tnum == 0) {
        num = 0;
        den = 1;
        return;
    }

    while (tnum != 0) {
        if (tnum < tden) {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum -= tden;
    }

    long gcd = tden;
    num /= gcd;
    den /= gcd;
}

// Operations
Fraction Fraction::add(const Fraction& other) const {
    return Fraction(num * other.den + den * other.num,
        den * other.den);
}

Fraction Fraction::sub(const Fraction& other) const {
    return Fraction(num * other.den - den * other.num,
        den * other.den);
}

Fraction Fraction::mul(const Fraction& other) const {
    return Fraction(num * other.num,
        den * other.den);
}

Fraction Fraction::div(const Fraction& other) const {
    if (other.num == 0) {
        cout << "Cannot divide by zero fraction!" << endl;
        exit(1);
    }
    return Fraction(num * other.den,
        den * other.num);
}

// Exercise function
void chapter6_exercise11() {
    char choice;
    do {
        Fraction f1, f2;

        cout << "First fraction: ";
        f1.getFraction();

        cout << "Second fraction: ";
        f2.getFraction();

        cout << "Addition: ";
        f1.add(f2).showFraction(); cout << endl;

        cout << "Subtraction: ";
        f1.sub(f2).showFraction(); cout << endl;

        cout << "Multiplication: ";
        f1.mul(f2).showFraction(); cout << endl;

        cout << "Division: ";
        f1.div(f2).showFraction(); cout << endl;

        cout << "Continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}
