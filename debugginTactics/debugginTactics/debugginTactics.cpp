// debugginTactics.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#include <iostream>
#include <print>
#include "debugWithfunction.h" //basic - unconditonal
#include "debuggingUsingPreprocess.h" // mid - conditonal
#include "logging.h" // high - use log file (record debug, info , warinings, errors, fetal)
#include "integratedDebugger.h" // high - use integrate debugger for comment debugging


int main()
{
    debuggingWithPreprocessorDirective();
    std::println();

    debugWithfunction();
    std::println();

    loggingDebugging();
    std::println();

    integratedDebugger();

    return 0;
}