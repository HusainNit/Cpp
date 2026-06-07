#include "varible_constexpr.h"


void varible_constexpr() {
	// https://www.learncpp.com/cpp-tutorial/constant-expressions/#compiletimebenefits
	

	// const does not make it immediately clear whether the variable is usable in a constant expression or not (context can point to it, but sometime its hard to know)

	// const does not provide a way to inform the compiler that we require a variable that is usable in a constant expression (and that it should halt compilation if it isn’t). Instead, it will just silently create a variable that can only be used in runtime expressions.

	// const to create compile-time constant variables does not extend to non-integral variables. And there are many cases where we would like non-integral variables to be compile-time constants too.


	// constexpr (constant expression): always a compile-time constant

	//constexpr int age{ 23 };	comment to stop error

}