//
// Created by Nick Polizogopoulos on 24/5/25.
//
#include <iostream>

// Write a program to convert a temperature from fahrenheit to celsius.

void fahrenheitToCelsius() {

    std::cout << "Exercise: Fahrenheit to Celsius" << std::endl << "=======================================" << std::endl;

    std::cout << "Enter Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    const double celsius = (fahrenheit - 32) / 1.8;
    std::cout << fahrenheit << " °F is equal to " << celsius <<  " °C.";

    std::cout << std::endl << std::endl;
}

