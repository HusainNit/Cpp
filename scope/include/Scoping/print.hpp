#pragma once

void print();

namespace Scoping {

	namespace Nscoping {
		void print();
	};

	void print();

	void printMsg();
}