//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>

// Ask the user for two numbers.
// Store the larger value in a separate variable and print it.

void largerNumber() {

    std::cout << "Exercise: Find the Larger of Two Numbers." << std::endl << "=======================================" << std::endl;

    std::cout << "Please, enter two numbers." << std::endl;

    std::cout << "Number #1: ";
    double number1;
    std::cin >> number1;

    std::cout << "Number #2: ";
    double number2;
    std::cin >> number2;

    const double largestNumber = (number1 > number2) ? number1 : number2;

    std::cout << std::endl
        << "The largest number is "
        << (largestNumber == number1 ? "the first: " : "the second: ")
        << largestNumber;

    std::cout << std::endl << std::endl;
}