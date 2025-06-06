//
// Created by Nick Polizogopoulos on 6/6/25.
//

#include <iostream>
#include "pointers.h"

// Implement the swap function for swapping two variables using pointers.

void swap(int* first, int* second) {
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

void swapUsingPointers() {

    std::cout << "Exercise: Swap two variables using Pointers" << std::endl << "=======================================" << std::endl;

    int a = 10;
    int b = 20;
    std::cout << "Before: a = " << a << ", b = " << b << std::endl;

    swap(&a, &b);
    std::cout << "After: a = " << a << ", b = " << b;

    std::cout << std::endl << std::endl;
}