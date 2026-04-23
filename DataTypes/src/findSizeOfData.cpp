#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT
#include "findSizeOfData.h"

void findSizeOfData()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // left justify output
                                                                                            //Min
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";                    //1


    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";                  //2

    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";                      //4 - 8
    std::cout << std::setw(16) << "long int:" << sizeof(long int) << " bytes\n";            //4 - 8     shorthand = long
    std::cout << std::setw(16) << "long long int:" << sizeof(long long int) << " bytes\n";  //8         shorthand = long long


    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";                    //4 - 8
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";          //8

    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";                  //4
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";                //8
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";      //8 - 12 - 16 [avoid useing]

    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";                    //1
    std::cout << std::setw(16) << "wchar_t:" << sizeof(wchar_t) << " bytes\n";              //2 - 4
    std::cout << std::setw(16) << "char8_t:" << sizeof(char8_t) << " bytes\n";              //1
    std::cout << std::setw(16) << "char16_t:" << sizeof(char16_t) << " bytes\n";            //2
    std::cout << std::setw(16) << "char32_t:" << sizeof(char32_t) << " bytes\n";            //4

    std::cout << std::setw(16) << "nullptr_t:" << sizeof(std::nullptr_t) << " bytes\n";     //4 - 8

}