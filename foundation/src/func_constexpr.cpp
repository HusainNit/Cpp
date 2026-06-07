#include "func_constexpr.h"
#include <iostream>

//  constexpr function must evaluate at compile-time, when the constant expression it is part of must evaluate at compile time (Otherwise, a constexpr function may be evaluated at either compile-time (if eligible) or runtime. ) 

// To be eligible for compile-time execution, all arguments must be constant expressions

// constexper must be fully definde for varible call (cant do forward call)

// constexpr functions: 
	// cant have I\O operation inside it (cout/cin)
	// chain effect: constexpr function can call other functions, but it must the other also constexpr as will
	// we can make constexper runtime, by using it in output operation(cout) and have not const arugments
	// both way of compilation made possible to serve both runtimes, and dont have to create 2 same behave functions


constexpr double calccirclecumfer(double redius) {
	constexpr double pi{ 3.14 };

	return (2.0 * redius * pi);
}

void func_constexpre() {

	// normal function are not allowed in constant expressions.(we cant intlize varible of constexpr with normal call function)

	constexpr double circ{ calccirclecumfer(5) }; // calccirclecumfer MUST be constexpr , and the arugment is const
	std::cout << "function of constexper, for circle cumfer: " << circ;

}