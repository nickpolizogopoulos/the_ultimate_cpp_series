//
// Created by Nick Polizogopoulos on 27/5/25.
//

#include <iostream>
#include "fundamental-data-types.h"

/* Write a program that asks the user a series of questions
 * like street, city, state, and zip code and then prints
 * the user's address using this format:
 *
 * Street
 * City, State, ZipCode
 * (This is addresses are displayed in the US).
 */

void addressInputUsingGetline() {

    std::cout << "Exercise: Address Input using getline()" << std::endl << "=======================================" << std::endl;

    std::string street;
    std::cout << "Enter your Street: ";
    std::getline(std::cin, street);

    std::string city;
    std::cout << "Enter your City: ";
    std::getline(std::cin, city);

    std::string state;
    std::cout << "Enter your State: ";
    std::getline(std::cin, state);

    std::string zipcode;
    std::cout << "Enter your ZipCode: ";
    std::getline(std::cin, zipcode);

    std::cout
        << std::endl
        << "Your Address is:" << std::endl
        << street << std::endl
        << city << ", " << state << ", " << zipcode;

    std::cout << std::endl << std::endl;
}