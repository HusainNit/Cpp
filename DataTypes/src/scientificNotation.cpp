#include "scientificNotation.h"
#include <iostream>

void scientificNotation() {
	double exponentZeroToRight{ 9.00400e2 };
	double exponentZeroToLeft{ 9.00400e-2 };
	double normal{ 900.400 };

	std::cout << exponentZeroToRight << "\n" << exponentZeroToLeft <<"\n" <<normal;
}