// avoidBomb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "getUserData.h"
#include "gameEngine.h"

int main() {
    bool open{ true }; 

    srand((unsigned int)time(0));
    int randomNum = {};
    
    for (int c = 100; c > 0; c -= 10) {
        randomNum = rand() % c;

      

        int userGuess = getUserData(c);
        open = gameEngine(randomNum, userGuess);

        if (!open) break;

        std::cout << "\n Safe... Moving to a smaller range... \n";
    }
  
    std::cout << "\n Game Ends";
    return 0;
};