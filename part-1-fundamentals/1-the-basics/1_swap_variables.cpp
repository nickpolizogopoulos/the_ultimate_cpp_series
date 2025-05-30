//
// Created by Nick Polizogopoulos on 23/5/25.
//
#include <iostream>
#include "basics.h"

// Given two variables x and y initialized with the values 10 and 20 respectively,
// write code to swap their values so that after execution, x holds 20 and y holds 10.

void swapVariables() {
    std::cout << "Exercise: Swap Variables" << std::endl << "=======================================" << std::endl;
    int x = 10;
    int y = 20;

    const int z = x;
    x = y;
    y = z;
    std::cout << "x = " << x << std::endl
    << "y = " << y;

    std::cout << std::endl << std::endl;
}