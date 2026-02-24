#include <iostream>
#include "gameEngine.h"
#include <random>

int gameEngine(int input) { // 1 = win , -1 = lose , 0 = tie , for future it better to use enum 
	srand(	static_cast<unsigned int>( time(0) )	);
	int randm{ rand() % 3 };

	if (input == randm) { // tie logic
		return 0;
	}

	switch (randm) {
		case 0: // rock
			return (input == 1 ? 1 : -1); //win/loss logic
		case 1: // paper
			return (input == 2 ? 1 : -1);
		case 2: // scissor
			return (input == 0 ? 1 : -1);
		default:
			return -99; // error that should not land, but this will satsify the compiler
	}
}