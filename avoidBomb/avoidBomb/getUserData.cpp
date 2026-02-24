#include <iostream>
#include "getUserData.h"

bool isValid(int num, int randNum);

int getUserData(int randNum) {
    int userNum = 0;

    while (true) {
        std::cout << "Enter a number between 0 and " << randNum << ": ";

        // Try to read an integer
        if (std::cin >> userNum) {
            // Step 1: Check if the number is in the correct range
            if (isValid(userNum, randNum)) {
                return userNum; // Everything is good!
            }
            else {
                std::cout << "Out of range! Try again." << std::endl;
            }
        }
        else {
            // Step 2: Handle non-number input (like '}' or 'abc')
            std::cout << "Error: That's not a number!" << std::endl;

            std::cin.clear(); // Clear the error flag
            // This ignores everything up to the next newline (Enter key)
            std::cin.ignore(1000, '\n');
        }
    }
}

bool isValid(int num, int randNum) {
	if (num > 0 && num <= randNum) 
		return true;
	
	else 
		return false;
	
}