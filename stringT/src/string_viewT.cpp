#include <iostream>
#include <string>      // for std::string
#include <string_view> // for std::string_view

void use_string_view(std::string_view str) { // this jsut have acces to read section, with string_view it will not make copy
	std::cout << str << '\n';
};


void string_viewT() {

	/*
		string_view(not null terminated) usege:
			string have problem that it will crate copy of string in every step (varible intlizing, passing to function), as string copy is expensive so string_view created to just read the string.
	*/

	// best for outbut
	using namespace std::string_literals;      // access the s suffix
	using namespace std::string_view_literals; // access the sv suffix

	std::string_view str{ "hello world" }; // in here is best to be c styled string, cuse s for string_literals make temp pointer and this will make error with string_view read
		/*
			here what will happend:
				string_view will do 2 things (view):
					1. poineter to the first letter in the string
					2. the size (length) of the string

				It does NOT copy the text, it simply points directly to the read-only memory where the string literal is stored.
		*/

	use_string_view(str);

	/*
		string_view can accept as it value either std::string,c style string, or std::string_view

		string view is poineter so if we try assigment it will not chagne the value but will change the poineter

		constexpr std::string_view str; is bossible, std::string is not
	*/


	std::string_view str1{ "dude. its 3AM go to bed" };
	std::cout << '\n' << str1;
	str1.remove_prefix(5); // remove 5 chars from left (englis start)
	std::cout << '\n' << str1;
	str1.remove_suffix(3); // remove 3 chars from right (english end)
	std::cout << '\n' << str1;

}