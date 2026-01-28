#include "chapter6_exercise11.h"
#include <iostream>
#include <cmath>    // для labs()
using namespace std;

// Class representing a fraction
class Fraction {
private:
    long num; // numerator
    long den; // denominator

public:
    // Default constructor initializes fraction to 0/1
    Fraction() : num(0), den(1) {}

    // Constructor with numerator and denominator
    Fraction(long n, long d) : num(n), den(d) {
        if (den == 0) {
            cout << "Denominator cannot be zero!" << endl;
            exit(1);
        }
        lowterms();
    }

    // Input fraction from user
    void getFraction() {
        char slash;
        cout << "Enter fraction (numerator/denominator): ";
        cin >> num >> slash >> den;
        if (den == 0) {
            cout << "Denominator cannot be zero!" << endl;
            exit(1);
        }
        lowterms();
    }

    // Display fraction
    void showFraction() const {
        cout << num << "/" << den << endl;
    }

    // Reduce fraction to lowest terms
    void lowterms() {
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

        // GCD using subtraction method
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

    // Add two fractions
    Fraction add(const Fraction& other) const {
        Fraction temp;
        temp.num = num * other.den + den * other.num;
        temp.den = den * other.den;
        temp.lowterms();
        return temp;
    }

    // Subtract two fractions
    Fraction sub(const Fraction& other) const {
        Fraction temp;
        temp.num = num * other.den - den * other.num;
        temp.den = den * other.den;
        temp.lowterms();
        return temp;
    }

    // Multiply two fractions
    Fraction mul(const Fraction& other) const {
        Fraction temp;
        temp.num = num * other.num;
        temp.den = den * other.den;
        temp.lowterms();
        return temp;
    }

    // Divide two fractions
    Fraction div(const Fraction& other) const {
        if (other.num == 0) {
            cout << "Cannot divide by zero fraction!" << endl;
            exit(1);
        }
        Fraction temp;
        temp.num = num * other.den;
        temp.den = den * other.num;
        temp.lowterms();
        return temp;
    }
};

void chapter6_exercise11() {
    char choice;
    do {
        Fraction f1, f2, result;

        cout << "First fraction:" << endl;
        f1.getFraction();

        cout << "Second fraction:" << endl;
        f2.getFraction();

        // Demonstrate all operations
        cout << "Addition: ";
        result = f1.add(f2);
        result.showFraction();

        cout << "Subtraction: ";
        result = f1.sub(f2);
        result.showFraction();

        cout << "Multiplication: ";
        result = f1.mul(f2);
        result.showFraction();

        cout << "Division: ";
        result = f1.div(f2);
        result.showFraction();

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}
