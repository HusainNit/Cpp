#include <iostream>
#include "getUserDataFromStream.h"

int getUserDataFromStream() {
	int num{};
	std::cout << "enter interger num: ";
	std::cin >> num;

	return num;
}