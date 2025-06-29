//
// Created by Nick Polizogopoulos on 21/6/25.
//

#include <iostream>
#include "structures_and_enumerations.h"

// Define a Structure for representing customers.
// Each customer should have three attributes:
// id (number), name (string), email (string).
// Then ask the user for these values, store them
// in a Customer Object and print the result.

struct Customer {
    int id;
    std::string name;
    std::string email;
};

void representCustomersViaStructures() {

    std::cout << "Exercise: Represent Customers via Structures" << std::endl << "=======================================" << std::endl;

    Customer customer;

    std::cout << "Please enter your customer information:" << std::endl;

    std::cout << "ID: ";
    std::cin >> customer.id;

    std::cout << "Name: ";
    std::cin >> customer.name;

    std::cout << "Email: ";
    std::cin >> customer.email;

    std::cout << "--------------------------------" << std::endl;
    std::cout
        << "Your ID: " << customer.id << std::endl
        << "Your Name: " << customer.name << std::endl
        << "Your Email: " << customer.email;

    std::cout << std::endl << std::endl;
}



