#include <iostream>
#include "ifStatment.h"

void ifStatment() {
	bool flag{};
	std::cout << "do you need food?";
	std::cin >> std::boolalpha >> flag;

	if (flag) {
		std::cout << "\nlets go!";
	}
	else {
		std::cout << "\n next time for sure \n";
	}

	int nums{};
	std::cout << "enter number:";
	std::cin >> nums;
	if (nums < 0) {
		std::cout << "\n this is nagitibe number";
	}
	else if (nums > 0) {
		std::cout << "\n this is poitive number";
	}
	else {
		std::cout << "\n the is zero number";
	}
}