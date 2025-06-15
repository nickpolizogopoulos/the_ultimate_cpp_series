//
// Created by Nick Polizogopoulos on 15/6/25.
//
#include <iostream>
#include "strings.h"

// Ask the user for their fullname.
// Write code to extract the first and last names.
// Keep in mind that some people have middle names.

void extractSubstrings() {

    std::cout << "Exercise: Extracting Substrings" << std::endl << "=======================================" << std::endl;

    std::cout << "Provide your first and last name (e.g. Bob Ross): ";
    std::string fullname;
    std::getline(std::cin, fullname);

    const size_t whiteSpace = fullname.rfind(' ');

    std::string firstName = fullname.substr(0, whiteSpace);
    std::string lastName = fullname.substr(whiteSpace + 1);

    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName;

    std::cout << std::endl << std::endl;
}