#include "chapter6_exercise12.h"
#include "chapter6_exercise11.h" // include Fraction class from exercise 12
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Use the Fraction class from chapter6_exercise12.cpp

void chapter6_exercise12() {
    int denom;
    cout << "Enter denominator (>1): ";
    cin >> denom;

    if (denom <= 1) {
        cout << "Denominator must be greater than 1!" << endl;
        return;
    }

    // Create all fractions between 0 and 1
    vector<Fraction> fractions;
    for (int n = 1; n < denom; ++n) {
        fractions.push_back(Fraction(n, denom));
    }

    int size = fractions.size();

    // Print top row
    for (const auto& f : fractions) {
        cout << setw(6);
        f.showFraction();
    }
    cout << "\n" << string(size * 6, '-') << endl;

    // Print multiplication table
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            Fraction prod = fractions[i].mul(fractions[j]);
            cout << setw(6);
            prod.showFraction();
        }
        cout << endl;
    }
}
