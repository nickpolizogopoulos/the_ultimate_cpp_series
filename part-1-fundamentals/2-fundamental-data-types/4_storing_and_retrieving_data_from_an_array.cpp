//
// Created by Nick Polizogopoulos on 27/5/25.
//

#include <iostream>
#include "fundamental_data_types.h"

// Write a program that asks the user for three names.
// Store these names in an array and then print the first name.

void storingAndRetrievingDataFromAnArray() {

    std::cout << "Exercise: Storing and retrieving data from an array." << std::endl << "=======================================" << std::endl;

    std::string names[3];

    std::cout << "Enter first name: ";
    std::getline(std::cin, names[0]);

    std::cout << "Enter second name: ";
    std::getline(std::cin, names[1]);

    std::cout << "Enter third name: ";
    std::getline(std::cin, names[2]);

    std::cout << std::endl << "First name: " << names[0];

    std::cout << std::endl << std::endl;

}