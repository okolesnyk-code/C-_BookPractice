#include <iostream>
using namespace std;

// Structure to store old British currency
struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

void chapter4_exercise10() {

    double decimalPounds;
    Sterling oldMoney;

    // Ask user to enter amount in decimal pounds
    cout << "Enter amount in decimal pounds: ";
    cin >> decimalPounds;

    // Convert total amount to pence
    int totalPence = static_cast<int>(decimalPounds * 240);

    // Calculate pounds
    oldMoney.pounds = totalPence / 240;
    totalPence %= 240;

    // Calculate shillings
    oldMoney.shillings = totalPence / 12;

    // Remaining pence
    oldMoney.pence = totalPence % 12;

    // Output result
    cout << "Old British currency format: "
        << oldMoney.pounds << " pounds, "
        << oldMoney.shillings << " shillings, "
        << oldMoney.pence << " pence" << endl;
}
