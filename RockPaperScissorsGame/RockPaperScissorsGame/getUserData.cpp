#include <iostream>
#include "getUserData.h"
#include <cctype>

bool isValid(std::string userval);

int getUserData() {
	std::string userIn{};
		while (true){
		std::cout << "enter your choice Rock(R), Paper(P), or Scissors(S):";
	
		std::cin >> userIn;
		if (isValid(userIn)) {
			switch (tolower(userIn[0])) {
				case 'r':
					return 0;
				case 'p':
					return 1;
				case 's':
					return 2;
			}
		}
		else {
			std::cout << "\nplease enter the correct input\n";
		}
	}

}

bool isValid(std::string userval) {
	switch (tolower(userval[0])) {
		case 'r':
		case 'p':
		case 's':
			return 1;

		default:
			return 0;
	}

}