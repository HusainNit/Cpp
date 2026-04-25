#include <iostream>
#include "const.h"
#define NAME "Husain" //this is conatnt (object-like macros with substitution text.)

void constVariable() {
	const int age{ 21 }; //cosnet must defiend in the creation
	//age = 12;  = error

	std::cout << age << " and " << NAME;

}