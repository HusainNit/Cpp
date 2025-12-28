#include <iostream>
int add (int num1 , int num2){
	return num1 + num2;
};

int multi(int num1, int num2) {
	return num1 * num2;
}

int divid(int num1, int num2) {
	if (num1 != 0) {
		return num1 / num2;
	}
	else {
		return 0;
	}
}