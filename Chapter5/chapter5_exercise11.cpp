#include "chapter5_exercise11.h"
#include <iostream>
using namespace std;

// Structure to store old British currency
struct sterling {
    int pounds;
    int shillings; // 1 pound = 20 shillings
    int pence;     // 1 shilling = 12 pence
};

// Function to input a sterling amount
sterling inputSterling() {
    sterling s;
    cout << "Enter pounds: ";
    cin >> s.pounds;
    cout << "Enter shillings: ";
    cin >> s.shillings;
    cout << "Enter pence: ";
    cin >> s.pence;
    return s;
}

// Function to add two sterling amounts
sterling addSterling(sterling s1, sterling s2) {
    sterling sum;
    sum.pence = s1.pence + s2.pence;
    sum.shillings = s1.shillings + s2.shillings + sum.pence / 12; // convert pence to shillings
    sum.pence %= 12; // remainder pence
    sum.pounds = s1.pounds + s2.pounds + sum.shillings / 20; // convert shillings to pounds
    sum.shillings %= 20; // remainder shillings
    return sum;
}

// Function to display a sterling amount
void displaySterling(sterling s) {
    cout << "Result: "
        << s.pounds << " pounds, "
        << s.shillings << " shillings, "
        << s.pence << " pence" << endl;
}

// Main exercise function
void chapter5_exercise11() {
    cout << "Enter first amount:" << endl;
    sterling s1 = inputSterling();

    cout << "Enter second amount:" << endl;
    sterling s2 = inputSterling();

    sterling sum = addSterling(s1, s2);

    displaySterling(sum);
}
