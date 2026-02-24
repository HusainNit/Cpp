/*
	there is alot of debugging methods, here what i think good to remember for now:
		1. F10							- step over the functions
		2. F11							- step into the function
		3. ctrl + F10					-	run to cursor
		4. F5 + breakDown				-	add break down that will stop the app at it

		5. Watch Window					-	add varible in it to track the the varible value changes
		6. Call Stack					-	use it to check the methods order of exit and current excution

		7. Build > Run code analysis	-	analyze source code to identify specific semantic issues 
*/


#include <print>

void integratedDebugger() {
	int x{ 1 };
	std::println("the x value is {}", x);
	x = x + 2;
	std::println("the x value is {}", x);

	x = x * 2;
	std::println("the x value is {}", x);

}