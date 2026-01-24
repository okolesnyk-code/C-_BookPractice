#include "chapter3_exercise5.h"
#include <iostream>
#include <string>


void chapter3_exercise5() {

	int height;
	std::cout << "Enter height of a pyramid: ";
	std::cin >> height;

	char symbol = 'X';
	std::string symbols_1 = "X"; // amount of symbols on the 1 level
	std::string symbols_on_the_level = symbols_1; // amount of symbols on the each level. 
	int width = height * 2 - 1; // width of a pyramid (amount of symbols on the last level)
	std::string spaces_1 = ""; spaces_1.append(width - 1, ' ');
	std::string spaces_on_the_level = spaces_1; // amount of spaces on the each level
	std::string spaces_from_one_side_of_symbols = spaces_1; spaces_from_one_side_of_symbols.resize(spaces_on_the_level.size() / 2);

	for (int i = 0, step_of_resize = spaces_from_one_side_of_symbols.size(); i < height; i++)
	{


		std::cout << spaces_from_one_side_of_symbols << symbols_on_the_level << spaces_from_one_side_of_symbols << std::endl;

		if (i == height - 1) { continue; }

		step_of_resize--;
		spaces_from_one_side_of_symbols.resize(step_of_resize); // decrease amount of spaces on 2 on the each iteration
		symbols_on_the_level.append(2, symbol); // add 2 symbols on the each iteration;


	}

}