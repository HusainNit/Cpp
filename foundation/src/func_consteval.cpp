#include "func_consteval.h"
#include <iostream>

// consteval must be compile time

consteval auto CONSTEVAL(auto val) { return val; }; // better approach and cleaner

consteval int greatest(int x, int y, int z = 15) {
	// king of the hill appraoch
	int max = x;
	if (y > max) { max = y; }
	if (z > max) { max = z; }
	return max;
};

// force compile time
constexpr int greater(int x, int y) {
	if (std::is_constant_evaluated()) {
		return x > y ? x : y;
	}
	 return x > y ? x : y;
};


void func_consteval() {

	std::cout << greatest(25, 12,30);
	std::cout << "\n" << CONSTEVAL(greater(15, 20));

}