#include "func_constexpr.h"
#include <iostream>

//  constexpr function must evaluate at compile-time, when the constant expression it is part of must evaluate at compile time (Otherwise, a constexpr function may be evaluated at either compile-time (if eligible) or runtime. ) 

// To be eligible for compile-time execution, all arguments must be constant expressions

// constexper must be fully definde for varible call (cant do forward call), if used in multi files define it all in the header file

// constexpr functions: 
	// cant have I\O operation inside it (cout/cin)
	// chain effect: constexpr function can call other functions, but it must the other also constexpr as will
	// we can make constexper runtime, by using it in output operation(cout) and have not const arugments
	// both way of compilation made possible to serve both runtimes, and dont have to create 2 same behave functions
	// to make the function compile-time, all the arguments/calles must be const as will

// constexper func calles not constexper
	// we need the trick(compile-time loophole) to give it one way for compile-time gurenteed: if (var < 0) return 0; , which is return statment
		/*
			constexpr int my_function(int x, bool compile_time_mode) {
				if (compile_time_mode) return 1; // The compile-time loophole!

				return runtime_only_function(x);
			}

			constexpr int foo(int x){
				if (x < 0) return 0; // needed prior to adoption of P2448R1 in C++23 (see note below)
				return getValue(x);  // call to non-constexpr function here
			}
		*/



constexpr double calccirclecumfer(double redius) {
	constexpr double pi{ 3.14 };

	return (2.0 * redius * pi);
}

void func_constexpre() {

	// normal function are not allowed in constant expressions.(we cant intlize varible of constexpr with normal call function)

	constexpr double circ{ calccirclecumfer(5) }; // calccirclecumfer MUST be constexpr , and the arugment is const
	std::cout << "function of constexper, for circle cumfer: " << circ;

}