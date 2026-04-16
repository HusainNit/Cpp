/*
	there is alot of debugging methods, here what i think good to remember for now (all of these can be found in top menu at debug or at hover menue when debugger is ranning):

		1. F10										-	step over the functions
		2. F11										-	step into the function
		3. ctrl + F10								-	run to cursor
		4. F5 + breakDown							-	add breakDown(the red curcle that can be add in the left of each line), that move debugger to this point.
		5. shift + F5								-	stop the debugger

		// these will shows in debuggin mode:
		6. Watch Window								-	add varible in it to track the the varible value changes (can use QuickWatch to add the varible to the watch window)

		7. Call Stack								-	use it to check the methods order of exit and current excution


		8. Build > Run code analysis				-	analyze source code to identify specific semantic issues 


		// these will shows in debuggin mode:
		9.  debug > windows > locals				-	shows the current file varibles (its more better then watchWindow)
		10. debug > windows > threads				-	shows the threads that working in the background
		11. debug > windows > modules				-	shows the moudles that have been used(including the kerinal staff)
		12. debug > windows > processes				-	shows the process that handels the works
		13. debug > windows > memory > memory1		-	shows the current values in the memory
		14. debug > windows > Disassembly			-	shows assembly code
		15. debug > windows > registers				-	shows the register that used.
*/


#include <print>
#include <string>

void integratedDebugger() {
	int x{ 1 };
	std::println("the x value is {}", x);
	x = x + 2;
	std::println("the x value is {}", x);

	x = x * 2;
	std::println("the x value is {}", x);

	float deg{ 22.9f };  // f added to pass error warning C4305: 'initializing': truncation from 'double' to 'float' , double is 64bit and float is 32bit.
	std::string name{ "husain" };

	std::println("this is the degree for today {}", deg);
	std::println("this is user name {}", name);

}