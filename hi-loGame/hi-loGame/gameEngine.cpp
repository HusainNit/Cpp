#include "gameEngine.h"
#include <iostream>

bool gameEngine(int randNum, int userNum) {
	if (userNum < randNum) {
		std::cout<< "\n Too low \n";
	}
	else if (userNum > randNum) {
		std::cout << "\n Too high\n";

	}
	else {
		std::cout << "\n correct";
		return false;
	}
}

