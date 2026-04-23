#include <iostream>
#include "boolean.h"

void booleanDY() {
	bool flag{ true };
	bool flag2{ false };
	bool flag1Inv{ !true };
	bool flag2Inv{ !false};
	bool flagnum{ 1};
	bool flag2num{ 0};

	std::cout << flag << "\n"
		<< flag2 << "\n"
		<< flag1Inv << "\n"
		<< flag2Inv << "\n";

	std::cout << std::boolalpha; // print the bool as true of false not nums

	std:: cout << flagnum << "\n"	
				<< flag2num;

	// cin ony accept nomical data, so o=false 1=true and any thing else is true, and non numric is false
	// to accept alphabets just do std::cin<< std::booleanalpha; then the operation cin (cin will be case sinsitive = true is only accepted (my needed std::noboolalpha)
	
}
