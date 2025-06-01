//
// Created by Nick Polizogopoulos on 1/6/25.
//

#include <iostream>
#include "arrays.h"

// Define an array with three values that represent x, y and z coordinates.
// Store these values in three variables x, y and z using Structured Binding.
// Print all three variables.

void structuredBinding() {

    std::cout << "Exercise: Structured Binding" << std::endl << "=======================================" << std::endl;

    int values[3] = { 10, 20, 30 };
    auto [x, y, z] = values;

    std::cout
        << "x = " << x << std::endl
        << "y = " << y << std::endl
        << "z = " << z;

    std::cout << std::endl << std::endl;
}