#include "Scoping/print.hpp"
int main() {

	// origonal call
		//Scoping::printMsg(); 

	// namespace allises
	namespace scopeEx = Scoping;   // namespace scopeEx = Scoping::Nscoping;
	scopeEx::printMsg();


	return 0;
}
