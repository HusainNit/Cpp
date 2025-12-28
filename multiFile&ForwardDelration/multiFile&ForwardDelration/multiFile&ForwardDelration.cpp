// multiFile&ForwardDelration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getUserDataFromStream();
int add(int num1,int num2);
int multi(int num1, int num2);
int divid(int num1, int num2);

int main()
{
    int num1{ getUserDataFromStream() };
    int num2{ getUserDataFromStream() };

    std::cout << "addition:" << add(num1, num2) << "\n";
    std::cout << "multipication:" << multi(num1, num2) << "\n";
    std::cout << "division:" << divid(num1, num2) << "\n";

    
}

int getUserDataFromStream() {
    int num1{};
    std::cout << "enter number:";
    std::cin >> num1;
    return num1;
}
