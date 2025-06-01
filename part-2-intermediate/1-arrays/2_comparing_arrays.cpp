//
// Created by Nick Polizogopoulos on 1/6/25.
//

#include <iostream>
#include "arrays.h"

// Declare two arrays, "first" and "second" and compare them side by side.
// If they match, print "Both arrays are identical!".
// If not, print "The arrays do not match."

void comparingTwoArrays() {

    std::cout << "Exercise: Comparing two arrays" << std::endl << "=======================================" << std::endl;

    const int first[] = {10, 20, 30};
    const int second[] = {10, 20, 30};
    bool areEqual = true;

    for (int i = 0; i < std::size(first); i++)
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }

    std::cout << (areEqual ? "Both arrays are identical!" : "The arrays do not match.") << std::endl;

    std::cout << std::endl << std::endl;
}
