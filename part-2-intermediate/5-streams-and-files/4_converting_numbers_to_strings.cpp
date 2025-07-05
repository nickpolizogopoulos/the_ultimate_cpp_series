//
// Created by Nick Polizogopoulos on 5/7/25.
//
#include <iostream>
#include <sstream>
#include <fstream>
#include "streams_and_files.h"

// double number = 12.34;
// std::stringstream stream;
// stream << std::fixed << std::setprecision(2) << number;
// std::string str = stream.str();
// std::cout << str;
// Extract the above piece of code into a reusable function for converting double values to strings.

// We're actually overloading the to_string() method
// instead of making a custom function for this.
std::string to_string(double number, int precision) {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << number;
    return stream.str();
}

void convertingNumberToStrings() {

    std::cout << "Exercise: Converting Numbers to Strings" << std::endl << "=======================================" << std::endl;

    double number = 13.1200000000;
    std::cout << to_string(number, 2);

    std::cout << std::endl << std::endl;
}