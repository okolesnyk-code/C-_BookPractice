#include "chapter2_exercise12.h"
#include <iostream>

using namespace std;

void chapter2_exercise12() {

    float decPounds;
    int pounds, shillings, pence;
    float decFraction;

    cout << "Enter decimal pounds: ";
    cin >> decPounds;

    // Extract whole pounds
    pounds = static_cast<int>(decPounds);

    // Fractional part
    decFraction = decPounds - pounds;

    // Convert fraction to shillings
    shillings = static_cast<int>(decFraction * 20);

    // Remaining fraction for pence
    decFraction = decFraction * 20 - shillings;
    pence = static_cast<int>(decFraction * 12 + 0.5); // rounding

    cout << "Equivalent old-style amount: "
        << pounds << "." << shillings << "." << pence << endl;

}
