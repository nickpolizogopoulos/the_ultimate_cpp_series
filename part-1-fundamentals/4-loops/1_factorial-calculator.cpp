//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>
#include "loops.h"

// Ask the user for a number.
// Print the factorial of that number.

void factorialCalculator() {

    std::cout << "Exercise: Calculate and Print the Factorial of a Number." << std::endl << "=======================================" << std::endl;

    std::cout << "Enter a positive number: ";
    double number;
    std::cin >> number;

    if (number < 0)
        std::cout
            << "-------------" << std::endl
            << number << " is not a positive number.";
    else {
        double factorial = 1;

        for (int i = 1; i <= number; i++)
            factorial = factorial * i;

        std::cout
            << "-------------" << std::endl
            << "Factorial of the number " << number << " is: " << factorial;

        std::cout << std::endl << std::endl;
    }
}