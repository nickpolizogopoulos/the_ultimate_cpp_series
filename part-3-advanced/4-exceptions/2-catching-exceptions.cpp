//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>
#include "exceptions.h"
#include "../1-classes/2-rectangle-class/Rectangle.h"


void createRectangle() {

    try {
        // code to open a file.
        std::cout << "Opening the file." << std::endl;
        Rectangle rectangle{};
        rectangle.setWidth(0);
    }
    catch(const std::invalid_argument& e) {
        // code to close the file
        std::cout << "Closing the file." << std::endl;
        throw;
    }
}

void doWork() {
    createRectangle();
}

void catchingExceptions() {

    try {
        doWork();
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}