// debugginTactics.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "debugWithfunction.h" //basic - unconditonal
#include "debuggingUsingPreprocess.h" // mid - conditonal
#include "logging.h" // high - use log file (record debug, info , warinings, errors, fetal)

int main()
{
    debuggingWithPreprocessorDirective();
    std::cout << "\n";
    debugWithfunction();
    std::cout << "\n";
    loggingDebugging();
    return 0;
}