#include "chapter3_exercise7.h"
#include <iostream>
#include <cmath>

void chapter3_exercise7(){

    double initialDeposit;
    int years;
    double interestRate;

    std::cout << "Enter initial deposit: ";
    std::cin >> initialDeposit;

    std::cout << "Enter number of years: ";
    std::cin >> years;

    std::cout << "Enter interest rate (%): ";
    std::cin >> interestRate;

    double finalAmount = initialDeposit * pow(1 + interestRate / 100, years);

    std::cout << "After " << years << " years you will get "
        << finalAmount << " dollars." << std::endl;

   
}
