// RockPaperScissorsGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "getUserData.h"
#include "gameEngine.h"

int main()
{
    for (int c = 3; c > 0; --c) {
        std::cout << "game #" << c <<":\n";
        switch (gameEngine(getUserData())) {
            case 0:
                std::cout << "\ntie game\n\n";
                break;
            case 1:
                std::cout << "\nwin the game\n\n";
                break;
            case -1:
                std::cout << "\nlose the game\n\n";
                break;
        }
    }

    return 0;
}