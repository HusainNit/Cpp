#include <iostream>
#include <iomanip>
#include <string>

void precedenceTOP() {

    // Header
    std::cout << std::left
        << std::setw(22) << "Operators" << " | "
        << std::setw(14) << "Group" << " | "
        << std::setw(8) << "Weight" << " | "
        << std::setw(25) << "Note" << "\n";

    std::cout << std::string(75, '-') << "\n";

    // Rows
    std::cout << std::left
        << std::setw(22) << "()" << " | "
        << std::setw(14) << "-" << " | "
        << std::setw(8) << "1" << " | "
        << std::setw(25) << "The Boss / Grouping" << "\n"

        << std::setw(22) << "!, ++, --" << " | "
        << std::setw(14) << "Unary" << " | "
        << std::setw(8) << "2" << " | "
        << std::setw(25) << "Act on single var" << "\n"

        << std::setw(22) << "*, /, %" << " | "
        << std::setw(14) << "Math High" << " | "
        << std::setw(8) << "3" << " | "
        << std::setw(25) << "Advanced math" << "\n"

        << std::setw(22) << "+, -" << " | "
        << std::setw(14) << "Math Low" << " | "
        << std::setw(8) << "4" << " | "
        << std::setw(25) << "Basic math" << "\n"

        << std::setw(22) << "<<, >>" << " | "
        << std::setw(14) << "Shift" << " | "
        << std::setw(8) << "5" << " | "
        << std::setw(25) << "Bit shift / I/O" << "\n"

        << std::setw(22) << "<, >, <=, >=, ==, !=" << " | "
        << std::setw(14) << "Comparisons" << " | "
        << std::setw(8) << "6" << " | "
        << std::setw(25) << "Two-side comparison" << "\n"

        << std::setw(22) << "&, ^, |" << " | "
        << std::setw(14) << "Bitwise" << " | "
        << std::setw(8) << "7" << " | "
        << std::setw(25) << "Bit-level operations" << "\n"

        << std::setw(22) << "&&, ||" << " | "
        << std::setw(14) << "Logical" << " | "
        << std::setw(8) << "8" << " | "
        << std::setw(25) << "Boolean logic" << "\n"

        << std::setw(22) << "? :" << " | "
        << std::setw(14) << "Ternary" << " | "
        << std::setw(8) << "9" << " | "
        << std::setw(25) << "Inline if/else" << "\n"

        << std::setw(22) << "=, +=, -=" << " | "
        << std::setw(14) << "Assignment" << " | "
        << std::setw(8) << "10" << " | "
        << std::setw(25) << "Saves final value" << "\n";

    std::cout << std::string(75, '-') << "\n\n";

    // --- NICHE PRECEDENCE TABLE ---

    std::cout << std::left
        << std::setw(22) << "Niche Operators" << " | "
        << std::setw(14) << "Weight Reference" << "\n";

    std::cout << std::string(40, '-') << "\n";

    std::cout << std::left
        << std::setw(22) << "., ->" << " | " << "< 2 (Highest)\n"
        << std::setw(22) << "::" << " | " << "Scope resolution\n"
        << std::setw(22) << "Pointers: &, *" << " | " << "~ 2\n"
        << std::setw(22) << "sizeof, typeid" << " | " << "Compile-time tools\n";

    std::cout << std::string(40, '-') << "\n";

};