#include "chapter3_exercise11.h"
#include <iostream>

void chapter3_exercise11() {
    char choice;

    do {
        int p1, s1, d1;
        int p2, s2, d2;
        char operation;

        std::cout << "Enter first amount (pounds shillings pence): ";
        std::cin >> p1 >> s1 >> d1;

        std::cout << "Enter operation (+, -, *): ";
        std::cin >> operation;

        if (operation == '+' || operation == '-') {
            std::cout << "Enter second amount (pounds shillings pence): ";
            std::cin >> p2 >> s2 >> d2;
        }

        // Convert everything to pence
        int total1 = p1 * 240 + s1 * 12 + d1;
        int resultPence = 0;

        if (operation == '+') {
            int total2 = p2 * 240 + s2 * 12 + d2;
            resultPence = total1 + total2;
        }
        else if (operation == '-') {
            int total2 = p2 * 240 + s2 * 12 + d2;
            resultPence = total1 - total2;
        }
        else if (operation == '*') {
            double factor;
            std::cout << "Enter multiplier: ";
            std::cin >> factor;
            resultPence = static_cast<int>(total1 * factor);
        }
        else {
            std::cout << "Invalid operation!" << std::endl;
            continue;
        }

        // Convert back to pounds, shillings, pence
        int pounds = resultPence / 240;
        resultPence %= 240;

        int shillings = resultPence / 12;
        int pence = resultPence % 12;

        std::cout << "Result: "
            << pounds << " "
            << shillings << " "
            << pence << std::endl;

        std::cout << "Continue (y/n)? ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');


}
