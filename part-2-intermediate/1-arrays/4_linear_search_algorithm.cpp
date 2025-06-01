//
// Created by Nick Polizogopoulos on 1/6/25.
//

#include <iostream>
#include "arrays.h"

// Implement the linear search algorithm.
// Create a function for finding a value in an integer array.
// If the target value exists, return its index otherwise return -1.

int findElement(int array[], int size, int targetValue) {
    for (int i = 0; i < size; i++)
        if (array[i] == targetValue)
            return i;
    return -1;
}

void linearSearchAlgorithm() {

    std::cout << "Exercise: Structured Binding" << std::endl << "=======================================" << std::endl;

    std::cout << "int numbers[5] = { 1, 2, 3, 4, 5 };" << std::endl;
    std::cout << "Enter a number from the array to find its index: ";
    int target;
    std::cin >> target;
    std::cout << std::endl;

    int numbers[5] = { 1, 2, 3, 4, 5 };
    int result = findElement(numbers, std::size(numbers), target);

    if (result == -1)
        std::cout << "Element " << target << " was not found in the array.";
    else
        std::cout << "Element " << target << " found at index " << result << ".";

    std::cout << std::endl << std::endl;
}