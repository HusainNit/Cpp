#include <iostream>
#include <iomanip>
#include <string>

void evalOrder() {
    // --- EVALUATION ORDER WARNING TABLE ---

    std::cout << std::left
        << std::setw(32) << "Evaluation Practice" << " | "
        << std::setw(25) << "Code Example" << " | "
        << std::setw(30) << "Why?" << "\n";

    std::cout << std::string(92, '-') << "\n";

    std::cout << std::left
        << std::setw(32) << "AVOID: Inline Parameter Math" << " | "
        << std::setw(25) << "func(++num1, num2);" << " | "
        << std::setw(30) << "Compiler-dependent order (buggy)" << "\n"

        << std::setw(32) << "SAFE: Separate & Sequential" << " | "
        << std::setw(25) << "++num1; func(num1, num2);" << " | "
        << std::setw(30) << "Locks in predictable order" << "\n";

    std::cout << std::string(92, '-') << "\n\n";
};