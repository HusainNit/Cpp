#include <iostream>

int main() {

	/*
	*	the operator and oprands
	*		operators is + , -, * , /
	*		operands is the literals (numbers)
	*/


	/*
		how the computer know which to group? (we know that * should be solved first then the rest)

		1- predcedence: each operators assigned a level of precedence, higher oporators num gorup togother

		2- associativity: when two or more operators is adjacent, the compailer will select associativity base on the precedence. [left to right or rigth to left]

			to make the compound of operator more clear use parentheses '()'.
	*/


	/*
	*	reminder operator(%): is preferd to be allwase compare to 0 as it dont have the nagative problem. (x % 2) == 0 or (x % 2) != 0 
	*/

	/*
		increments and decrement:
			there is to type pre/post incremnts/decrements:

				- pre: is wehn we first do the math then we retun change value (more preformance and cuse less problems)
					example:
						x = 5
						y = ++x   > so it will first change x value then assign new x value(6) to y

				- post: we frist return the value then do the math (slow as it will make copy)
					example:
						x = 5
						y = x++   > we first add x value to y, then we increments x
	*/

	/*
	*	side effect: as we dont know the direction of evlauting the compile use we must be carefull with function side effect prameters
	*/


	/*
		comma operator is dangrouse and should not be used (in output callse or palce of comma opelation)
	*/

	/*
	*   ternary operator: is shorthand if-else operator
	* 
	*	conditionCheck ? true : false;		-> second and third should be same data type or types the compile can convert to.
	* 
	*		the predcendenc in here is very imp as the << has higher precedence then ? 
	*	
	*			so we should parenthesize the full tenrany inclue if ther opeators like < or > or etc.
	*				
					ex: std::count << (iseven ?true:false) , std::cout << ((x >y) ? true : false)
	*/

	

	/*
		relational operators:
			> , < , >= , <= , == , !=
				comparing float numbers is not safe to do as float operations(+,-,\,*) not that precise.
	*/

	/*
		logical operators
			! , || , &&
				Logival NOT(!): 
					- have high precedence 
					- can be compoled with truthy and falsy
					- to force any value to boolean use the double not trick !!
			there is no XOR in c++, but can implemnted with !=
	*/

	return 0;
}

