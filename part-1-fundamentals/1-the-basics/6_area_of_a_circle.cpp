//
// Created by Nick Polizogopoulos on 24/5/25.
//

#include "basics.h"
#include <iostream>
#include <cmath>

// Write a program that asks the user to enter the
// radius of a circle and prints the area of the circle.

void areaOfACircle() {

    std::cout << "Exercise: Area of a Circle" << std::endl << "=======================================" << std::endl;

    std::cout << "Enter radius: ";
    double radius;
    std::cin >> radius;

    const double pi = 3.14;
    const double area = pi * pow(radius, 2);

    std::cout << "The area of the Circle is: " << area << std::endl;

    std::cout << std::endl << std::endl;
}