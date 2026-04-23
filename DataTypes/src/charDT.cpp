#include <iostream>
#include "charDT.h"

void charDT() {
	std::cout << "do you need nap?(y/n)";
	char nap{};  // integral type (represnedted ans numbers) - will save data as ASCII 
	std::cin >> nap; // cin skip the whitespace if there is one. std::cin.get() used for getting the skipplable data.
	// user enterd "a b" cin.git will get white sapce so stream will be a > " " > b , cin alone will have stream as a > b
	std::cout << nap;
}