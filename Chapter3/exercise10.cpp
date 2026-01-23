#include "exercise10.h"
#include <iostream>

void chapter3_exercise10() {
    double initialDeposit;
    double targetAmount;
    double interestRate;

    std::cout << "Enter initial deposit: ";
    std::cin >> initialDeposit;

    std::cout << "Enter target amount: ";
    std::cin >> targetAmount;

    std::cout << "Enter interest rate (%): ";
    std::cin >> interestRate;

    double currentAmount = initialDeposit;
    int years = 0;

    while (currentAmount < targetAmount) {
        currentAmount += currentAmount * interestRate / 100;
        years++;
    }

    std::cout << "It will take " << years
        << " years to reach at least "
        << targetAmount << " dollars." << std::endl;

  
}
