#include <iostream>
#include <string> // "string" use
#include <typeinfo> // "typeid" use

void stringT() {

	using namespace std::string_literals; //recommaned as it prevent some of the problems with c styled string

	/*
		std::cout << "foo\n";   // no suffix is a C-style string literal
		std::cout << "goo\n"s;  // s suffix is a std::string literal
	*/


	std::string name{ "husain" };
	name = "ali";
	name += " isa";
	std::cout << name;

	/*
		the power of std::string
			1- it able to store any size of string at runtime.
			2- when it needs more memory it can at runtime [dynamic allocation] to requset more
	*/


	std::string color{};
	std::cout << " enter your fav color: ";
	std::getline(std::cin >> std::ws, color); // getline used to get full line as cin get until whitespace, which it not good for name or someting similer to name. std::wc is input mainpulator that ignore the enter(leading whitesapce)

	std::cout << color;
	std::cout << '\n';

	std::cout << "the size of name(class . ): " << name.length() << " type is: " << typeid(name.length()).name() << " casting to int : " << typeid(static_cast<int>(name.length())).name() << '\n';
	std::cout << "the size of name(ssize): " << std::ssize(color) << " type is: " << typeid(std::ssize(color)).name() << " casting to int : " << typeid(static_cast<int>(std::ssize(color))).name();

}