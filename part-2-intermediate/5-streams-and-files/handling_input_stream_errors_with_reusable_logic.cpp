//
// Created by Nick Polizogopoulos on 29/6/25.
//
#include <iostream>
#include "streams_and_files.h"

// Ask the user to enter two integers and display them.
// Ensure invalid input is handled properly by validating the input
// and clearing the input stream as needed.
// Extract the validation logic into a reusable function.

void inputHandler(const std::string& numberText, long &input) {
    while (true) {
        std::cout << numberText << " number: ";
        std::cin >> input;
        if (std::cin.fail()) {
            std::cout << "Error: Enter a valid number!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else break;
    }
}

void handlingInputStreamErrorsWithReusableLogic() {

    std::cout << "Exercise: Handling Input Stream Errors with Reusable Logic" << std::endl << "=======================================" << std::endl;

    long first, second;
    std::cout << "Enter two integer numbers:" << std::endl;

    inputHandler("First", first);
    inputHandler("Second", second);

    std::cout
        << "------------" << std::endl
        << "Your First number: " << first << std::endl
        << "Your Second number: " << second;
}