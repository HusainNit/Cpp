#include <iostream>
#include <iomanip> // alter the data output
#include "floatNums.h"

void floatNums() {

	//float f{ 15.0f }; //needs the f suffix to works as float
	//double d{ 16.f };
	double bignum{ 9893.9112784 };

	// cout will NOT print the fractional parts
	std::cout << std::setprecision(17); // shows 17 digint of percision
	std::cout << bignum;


	// floating numbers have rounding errors

}