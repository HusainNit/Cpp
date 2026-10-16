#include "Scoping/print.hpp"
#include <iostream>

void print() {
	std::cout << "gloable function";
}

namespace Scoping {
	void print() {
		std::cout << "print namespace test ";
	}

	void printMsg(){
		print();
		::print(); //will call the one otuside the namspace or globle func
	
	}
}