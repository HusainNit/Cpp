#include "optimization.h"

void optimzation() {
	// optimzation is to make programs runs more efficiently

	// profiler used to know how long each part of the program takes (manwall optimzation)

	// optimizer used to optimzed the low level code base on the machine artichater (automatick optimzer)



	// compiler now days use compile-time evaluation, that will result in faster and smaller excuatable
		/*	constant folding :		compiler replace expression(3 + 7) that have sonstant operands, and replace it with the result(7).it same as in the(subexpressions[evlation in print							direct cout << 3 + 4]).less CPU cycles needs at expresion evaluation in the runtime

			Constant propagation:	varibles that have constant value it will need TWO memory request, so it will replace use of value of constant varible in each place we use the								varible (int x { 7 }; int y{ 3 };std::cout << x + y << '\n';	  ->	so in compile it will just do 7 + 3 > 10 and then run it at runTime which								will not use CPU

			Dead code elimination:	compiler removes code that may be executed but has no effect on the program’s behavior. (	[remove x] int x { 7 };   std::cout << 7 << '\n';)								(optimzed out) 
		*/
		


	// [const is esier to optimze] --> const eairthGravity=9.8



	// as-if-rule: compile can optimze the code as it want, as long the program behaves as the same prorammer program it.
		
	// compile-time vs runtime const

	// compile time programming: make some part of codes to to execute at compile time
		// improve are of compile time execution:
			/*
				Performance:					makes our programs smaller and faster, The more code we can ensure is capable of evaluating at compile-time, the more performance benefit									we’ll see.
			 
				Versatility:					If it's marked as a compile-time constant, it stays a compile-time constant. If it's not, it will be optimzed or not by the compiler to									be either compile-time or excute-time
			 
				Predictability:					compile time code will be allwase compile time code
			 
				Quality(error):					we can have compile detect certin  errors and compile time, insted of hnadling them in runtime
			 
				Quality(undefind behavier):		undefined behavior is not allowed at compile-time, whcih compiler SHOULD halt the build and ask for fix(this is hard for compilers,and										it may not catch them all times)
			*/



	// Guaranteed compile-time programming(constant expressions):
		/*
			1. Constexpr variables
			2. Constexpr functions
			3. Templates 
			4. static_assert 
		*/


	/* For a variable itself to be a compile-time constant expression, it must meet two rules:

			1. It must be a const integral type.
			2. must the operation applied to same data type.
			3. Its initializer must also be a constant expression.
	*/

	/* constant types:
		literals: 'c' , 5 ,4.15
		intergral: whole nums (int,char, bool,long), double and float is not constant
	*/
}