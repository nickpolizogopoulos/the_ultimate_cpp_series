//
// Created by Nick Polizogopoulos on 4/6/25.
//
#include <iostream>
#include "pointers.h"

// int x = 10;
// int y = 20;
// Use pointers to change x to 20 and y to 60.

void modifyWithPointers() {

    std::cout << "Exercise: Using Pointers to Modify Variables" << std::endl << "=======================================" << std::endl;

    int x = 10;
    int y = 20;
    int* ptr = &x;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y;

    std::cout << std::endl << std::endl;

}