#include "chapter3_exercise9.h"
#include <iostream>

void chapter3_exercise9() {

    int guests;
    int seats;
    long long ways = 1;

    std::cout << "Enter number of guests: ";
    std::cin >> guests;

    std::cout << "Enter number of seats: ";
    std::cin >> seats;

    for (int i = 0; i < seats; i++) {
        ways *= (guests - i);
    }

    std::cout << "Number of possible arrangements: "
        << ways << std::endl;

}
