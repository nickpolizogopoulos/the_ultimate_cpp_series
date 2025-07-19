//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include <iostream>
#include "Point.h"

// Define a Class called Point with two integer attributes: x and y.
// Overload the Equality Operator for comparing two Point objects.

void exercisePoint() {

    std::cout << "Exercise: Point Class" << std::endl << "=======================================" << std::endl;

    Point first = {10, 20};
    Point second = {10, 2};

    std::cout << std::boolalpha << (first == second);

    std::cout << std::endl << std::endl;
}
