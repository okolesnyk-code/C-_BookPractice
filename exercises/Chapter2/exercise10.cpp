#include "exercise10.h"
#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

void chapter2_exercise10() {

    int pounds, shillings, pence;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "Enter shillings: ";
    cin >> shillings;

    cout << "Enter pence: ";
    cin >> pence;

    // Convert old system to decimal pounds
    // 1 pound = 20 shillings, 1 shilling = 12 pence
    double decimalPounds = pounds + (shillings / 20.0) + (pence / 240.0);

    // Output with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Decimal pounds: " << decimalPounds << endl;

   

}