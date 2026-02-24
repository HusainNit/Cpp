#include <iostream>
#include "gameEngine.h"

bool gameEngine(int randNum, int userNum) {
    if (userNum == randNum) {
        std::cout << "BOOM! You hit the secret bomb number: " << randNum << std::endl;
        return false; // Closes the game
    }
    else {
        return true; // Keeps the game open
    }
}