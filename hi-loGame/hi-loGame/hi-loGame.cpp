// hi-loGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "getUserData.h"
#include <random>
#include "gameEngine.h"

int main()
{
    srand(time(0));
    int randomNum = rand() % 21;
    bool open{ true };

    while (open) {
        open = { gameEngine(randomNum, getUserData()) };
        
    }

    return 0;
}
