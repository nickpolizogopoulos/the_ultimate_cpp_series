//
// Created by Nick Polizogopoulos on 30/5/25.
//

#include <iostream>
#include "functions.h"

// Create a function that receives two integers and returns the maximum of the two.

int maxOfTwo(int first, int second) {
    return first > second ? first : second;
}

void maxOfTwoNumbers() {

    std::cout << "Exercise: Max of Two Numbers." << std::endl << "=======================================" << std::endl;

    std::cout << "Enter Number #1: ";
    int first;
    std::cin >> first;

    std::cout << "Enter Number #2: ";
    int second;
    std::cin >> second;

    if (first == second)
        std::cout << "Numbers are equal.";
    else
        std::cout << "The maximum number is: " << maxOfTwo(first, second) << std::endl;

    std::cout << std::endl << std::endl;
}