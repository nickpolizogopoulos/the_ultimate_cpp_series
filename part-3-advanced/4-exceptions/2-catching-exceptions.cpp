//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>
#include "exceptions.h"
#include "../1-classes/2-rectangle-class/Rectangle.h"


void createRectangle() {
    Rectangle rectangle{};
    rectangle.setWidth(0);

    // first way: catch exception locally
    // try {
    //     Rectangle rectangle{};
    //     rectangle.setWidth(0);
    // }
    //     catch(std::exception& e) {
    //     std::cout << e.what() << std::endl;
    // }
}

void doWork() {
    createRectangle();
}

void catchingExceptions() {

    // second way: catch the exception in the main function
    // in case any exception happens anywhere in code.
    try {
        doWork();
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}