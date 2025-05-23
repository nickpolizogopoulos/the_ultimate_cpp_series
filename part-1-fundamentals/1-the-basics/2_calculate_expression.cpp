//
// Created by Nick Polizogopoulos on 23/5/25.
//
#include <iostream>

// Solve for z = x + 10 / 3y
// Given x = 10 and y = 5, find z.
// z must equal 1.33333

void calculateExpression() {
    std::cout << "Exercise: " << "Calculate Expression" << std::endl << "=======================================" << std::endl;

    const double x = 10;
    const double y = 5;

    const double z = (x + 10) / (3 * y);
    std::cout << "z = " << z;

    std::cout << std::endl << std::endl;
}