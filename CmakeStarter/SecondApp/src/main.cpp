#include "ageCheck.h"
#include <iostream>
#include <spdlog/spdlog.h>
#include "logUse.h"

int main() {
	spdlog::info("Application started! Checking age...");
	int age{};
	std::cout << "enter your age: \n";
	std::cin >> age;
	spdlog::info("The user input age is: {}", age);
	if (ageCheck(age)) {
		std::cout << "your abult, welcome to site";

	}
	else {
		std::cout << "your under age, see you next time";
	}

	logUse();

	

	return 0;
}