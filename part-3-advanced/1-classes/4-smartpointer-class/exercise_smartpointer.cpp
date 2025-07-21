//
// Created by Nick Polizogopoulos on 18/7/25.
//

// Define a very simple class called SmartPointer.
// In this class we have an attribute of type integer pointer.
// This class can only hold integer pointers.

// It should have a Constructor for initialising a pointer.
// When we create a SmartPointer object, we pass an integer pointer to this Constructor.

// It should also have a Destructor to release the memory.

#include <iostream>
#include "SmartPointer.h"

void smartPointer() {

    SmartPointer ptr{new int};

    *ptr = 100;
    std::cout << *ptr << std::endl;

    *ptr = 200;
    std::cout << *ptr;
}
