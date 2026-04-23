#include <iostream>
#include "typeCasting.h"

void typecasting() {
	/*
		two type of casting:
			1. implicit type conversion	 - compiler do it 
			2. Explicit type conversion	 - we do it [static_cast]
	*/
	char aLetter{ 97 };
	int num{ -14 };

	std::cout << static_cast<int> (900.400e2) << "\n";
	std::cout << aLetter << " = " << static_cast<int> (aLetter) << "\n";
	std::cout << static_cast<unsigned int> (num); // will result on modulo wrapped and is we change it to signed in c++20 it will be modulo wrapped as well


}