// HeaderFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "add.h"
#include "getUserDataFromStream.h"

int main()
{
    int result{ add(getUserDataFromStream(), getUserDataFromStream()) };
    std::cout << "the additon resutl is:"<< result;
}

