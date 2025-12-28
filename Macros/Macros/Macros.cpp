// Macros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AGE.h"; // take it from header folder, file Age.h
#define MY_NAME "Husain"


int main()
{
#ifdef MY_NAME
	std::cout << "my name is:" MY_NAME <<"\n";
#endif // MY_NAME

#ifndef AGE
	std::cout << "age have not been defind";
#elif AGE
	std::cout << "age:"<<AGE;
#endif // !AGE

#if 0  // this will beahaiv like comment block

#endif

}