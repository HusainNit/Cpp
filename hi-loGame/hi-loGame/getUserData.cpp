#include <iostream>
#include "getUserData.h"

bool IsValid(int input);

int getUserData() {
	int open{ true };

	while (open) {
		std::cout << "enter possitive number (between 1- 20): ";
		int userinput{};
		std::cin >> userinput;
		open= { IsValid(userinput) };
		if (!open) {
			return userinput;
		}
	}

}

bool IsValid(int input) {

	if (input > 0 && input < 21) {
		return false;
	}
	return true;
}