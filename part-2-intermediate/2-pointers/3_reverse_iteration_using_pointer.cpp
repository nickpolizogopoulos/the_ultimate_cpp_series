//
// Created by Nick Polizogopoulos on 7/6/25.
//

#include <iostream>
#include "pointers.h"

// Assuming we have an array of integers:
// int numbers[] = { 10, 20, 30 };
// Create a pointer that points to the last element in this array.
// Then use a while loop to iterate over this array and print each
// number in reverse order by decrementing the pointer each time.
// This should print 30, 20, 10.

void reverseIterationUsingPointer() {
    std::cout << "Exercise: Reverse Iteration using Pointer" << std::endl << "=======================================" << std::endl;

    int numbers[] = { 10, 20, 30 };

    int* pointer = &numbers[std::size(numbers) - 1];

    while (pointer >= numbers) {
        std::cout << *pointer << std::endl;
        pointer--;
    }

    std::cout << std::endl;
}