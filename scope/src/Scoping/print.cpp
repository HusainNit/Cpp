#include "Scoping/print.hpp"
#include <iostream>

void print() {
	std::cout << "gloable function\n";
}

namespace Scoping {

	// nested namespace
	namespace Nscoping {
		void print() {
			std::cout << "nested print\n";
		}
	}

	void print() {
		std::cout << "print namespace test\n";
	}

	void printMsg(){
		print();
		::print(); //will call the one otuside the namspace or globle func
		Nscoping::print();
	}
}

// nested can be defined as Scoping::Nscoping { };   -> this is just style choise 