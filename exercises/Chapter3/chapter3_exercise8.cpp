#include "exercise8.h"
#include <iostream>

    void chapter3_exercise8() {

    char choice;

    do {
        int p1, s1, d1;
        int p2, s2, d2;

        std::cout << "Enter first amount (pounds shillings pence): ";
        std::cin >> p1 >> s1 >> d1;

        std::cout << "Enter second amount (pounds shillings pence): ";
        std::cin >> p2 >> s2 >> d2;

        int totalPence = d1 + d2;
        int totalShillings = s1 + s2;
        int totalPounds = p1 + p2;

        // Handle pence overflow
        if (totalPence >= 12) {
            totalShillings += totalPence / 12;
            totalPence %= 12;
        }

        // Handle shillings overflow
        if (totalShillings >= 20) {
            totalPounds += totalShillings / 20;
            totalShillings %= 20;
        }

        std::cout << "Total: "
            << totalPounds << " "
            << totalShillings << " "
            << totalPence << std::endl;

        std::cout << "Continue (y/n)? ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

   
}
