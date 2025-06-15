//
// Created by Nick Polizogopoulos on 15/6/25.
//

#include <iostream>
#include "strings.h"

// Assume that a customer number should have 2 alphabetic characters followed by 4 digits.
// Ask the user for their customer number.
// Write a function to validate the given customer number.

bool isValid(std::string customerNumber) {
    if (customerNumber.length() != 6)
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i]))
            return false;

    for (int i = 2; i < customerNumber.length(); i++)
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}

void customerNumberValidation() {

    std::cout << "Exercise: Customer Number Validation" << std::endl << "=======================================" << std::endl;

    std::cout << "Provide your customer number to check its validity (e.g. AA1111): ";
    std::string customerNumber;
    std::cin >> customerNumber;

    bool numberIsValid = isValid(customerNumber);

    std::cout
        << "Your customer number " << "\"" << customerNumber << "\"" << " is "
        << (numberIsValid ? "valid." : "not valid.") << std::endl
        << (!numberIsValid ? "(a customer number should have 2 alphabetic characters followed by 4 digits)" : "");

    std::cout << std::endl;
}