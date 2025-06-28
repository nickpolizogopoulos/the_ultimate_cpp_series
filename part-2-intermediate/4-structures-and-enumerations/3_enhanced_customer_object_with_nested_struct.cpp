//
// Created by Nick Polizogopoulos on 28/6/25.
//
#include <iostream>
#include "structures-and-enumerations.h"

// Create a Structure for representing an address.
// Each address should have: Street, City, Zipcode.
// Once you define it, nest it within a Customer structure from exercise #1 (structures).
// Create and initialize a Customer Object.

struct Address {
    std::string street;
    std::string city;
    int zipcode;
};

struct Customer {
    int id;
    std::string name;
    std::string email;
    Address address;
};

void enhancedCustomerObjectWithNestedStruct() {

    std::cout << "Exercise: Enhance the Customer Object" << std::endl << "=======================================" << std::endl;

    Customer customer {
        7,
        "Nick",
        "email@email.com",
        {
            "1312 Fulton St.",
            "San Francisco",
            94117
        }
    };

    std::cout
        << "Customer information:" << std::endl
        << "ID: " << customer.id << std::endl
        << "Name: " << customer.name << std::endl
        << "Email: " << customer.email << std::endl
        << "Street: " << customer.address.street << std::endl
        << "City: " << customer.address.city << std::endl
        << "Zip code: " << customer.address.zipcode;

    std::cout << std::endl << std::endl;
}