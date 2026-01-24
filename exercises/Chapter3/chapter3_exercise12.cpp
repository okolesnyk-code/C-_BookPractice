#include "chapter3_exercise12.h"
#include <iostream>

void chapter3_exercise12() {

    char choice;

    do {
        int a, b, c, d;
        char slash1, slash2, operation;

        std::cout << "Enter first fraction (a/b): ";
        std::cin >> a >> slash1 >> b;

        std::cout << "Enter operation (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter second fraction (c/d): ";
        std::cin >> c >> slash2 >> d;

        int numerator = 0;
        int denominator = 0;

        if (operation == '+') {
            numerator = a * d + b * c;
            denominator = b * d;
        }
        else if (operation == '-') {
            numerator = a * d - b * c;
            denominator = b * d;
        }
        else if (operation == '*') {
            numerator = a * c;
            denominator = b * d;
        }
        else if (operation == '/') {
            numerator = a * d;
            denominator = b * c;
        }
        else {
            std::cout << "Invalid operation!" << std::endl;
            continue;
        }

        std::cout << "Result: "
            << numerator << "/" << denominator << std::endl;

        std::cout << "Do another calculation (y/n)? ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

   
}
