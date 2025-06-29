//
// Created by Nick Polizogopoulos on 25/5/25.
//

#include <iostream>
#include <iomanip>
#include "fundamental_data_types.h"

/* Write a program for printing this table:
Course		 Students
C++				 100
JavaScript		  50

Text labels are left aligned, numbers are right aligned.
*/

void formattedOutputTable() {

    std::cout << "Exercise: Formatting the courses table" << std::endl << "=======================================" << std::endl;

    std::cout
        << std::left << std::setw(15) << "Course" << std::setw(10) << "Students" << std::endl
        << std::setw(15) << "C++" << std::right << std::setw(8) << 100 << std::left << std::endl
        << std::setw(15) << "TypeScript" << std::right << std::setw(8) << 1250  << std::left << std::endl
        << std::setw(15) << "C#" << std::right << std::setw(8) << 60  << std::left << std::endl
        << std::setw(15) << "Swift" << std::right << std::setw(8) << 40;

    std::cout << std::endl << std::endl;
}