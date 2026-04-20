#include <iostream>
#include "fixProblems.h"
//#define ERRORHANDLER
void fixProblems() {
	#ifdef ERRORHANDLER
		// problems #1 (overflow): short is 2byts = 16bits = 2^16-1 = -32'768 to 32'767
		short over(32'768); // truncation of constant value
		std::cout << over;


		// problem #2 (module wrap-around [back or forward] in unsign): 
		unsigned short roundOver{ 0 };
		unsigned short roudDown{ 65'535 };
		roundOver += -2; // 0 > 65'535 > 65'534
		roudDown += 2; // 65'535 > 0 > 1 
		std::cout << roundOver << "  ";
		std::cout << roudDown;
	#endif // ERRORHANDLER


	// the fix: use fixed varibles (std::ini8_t , std::uint8_t, ..... , std::int64_t , std::uint64_t). fixed the deffrent size in every computer architecture, 
		// int8 and uint8 behave as char
		std::int16_t fixed{ 12 };
		std::cout << sizeof(std::int16_t) << "\n";
		std::cout << fixed;  


		/*
			rules of using each:
				- int: size dont matters
				- std::int#_t: string quantity the need ranges
				- std::uint#_t: bit minblation or warp arround
				
			** avoid using long , short, fast, least , the 8 bit fix , specefic combiler defind one.
		*/
}