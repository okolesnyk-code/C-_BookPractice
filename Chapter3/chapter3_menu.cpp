#include <iostream>
#include "chapter3.h"


void chapter3_menu()
{
    int choice = -1;

    while (choice != 0)
    {
        std::cout << "\nChapter 3\n";
        std::cout << "----------------\n";
        std::cout << "1 - Exercise 1\n";
        std::cout << "2 - Exercise 2\n";
        std::cout << "3 - Exercise 3\n";
        std::cout << "4 - Exercise 4\n";
        std::cout << "5 - Exercise 5\n";
        std::cout << "6 - Exercise 6\n";
        std::cout << "7 - Exercise 7\n";
        std::cout << "8 - Exercise 8\n";
        std::cout << "9 - Exercise 9\n";
        std::cout << "10 - Exercise 10\n";
        std::cout << "11 - Exercise 11\n";
        std::cout << "12 - Exercise 12\n";
        std::cout << "0 - Back\n";

        std::cout << "Choose exercise: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1: chapter3_exercise1(); break;
        case 2: chapter3_exercise2(); break;
        case 3: chapter3_exercise3(); break;
        case 4: chapter3_exercise4(); break;
        case 5: chapter3_exercise5(); break;
        case 6: chapter3_exercise6(); break;
        case 7: chapter3_exercise7(); break;
        case 8: chapter3_exercise8(); break;
        case 9: chapter3_exercise9(); break;
        case 10: chapter3_exercise10(); break;
        case 11: chapter3_exercise11(); break;
        case 12: chapter3_exercise12(); break;
        case 0: break;
        default:
            std::cout << "Invalid choice\n";
        }
    }
}