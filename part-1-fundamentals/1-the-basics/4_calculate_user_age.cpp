//
// Created by Nick Polizogopoulos on 24/5/25.
//
#include <iostream>

// Use the cin object to read the user's birth year,
// calculate their age based on the current year (2025)
// and print the result.

void calculateUserAge() {

    std::cout << "Exercise: " << "Calculate User's Age" << std::endl << "=======================================" << std::endl;

    int birthYear;
    std::cout << "Enter your birth year: ";
    const int currentYear = 2025; //hardcoded for now.
    std::cin >> birthYear;
    std::cout << std::endl;
    std::cout << "You are " << currentYear - birthYear << " years old!" << std::endl;

    std::cout << std::endl << std::endl;

}