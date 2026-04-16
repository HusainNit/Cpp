#include <iostream>
#include "debuggingUsingPreprocess.h"
#define ENABLE_DEBUGGING // comment this if you dont needs the debugging, it better we add it in universal header file where we can commit or not for multi file debugging use

void debuggingWithPreprocessorDirective() {
#ifdef ENABLE_DEBUGGING
	std::cerr << "debugging using the preprocessors";
#endif // ENABLE_DEBUGGING

}