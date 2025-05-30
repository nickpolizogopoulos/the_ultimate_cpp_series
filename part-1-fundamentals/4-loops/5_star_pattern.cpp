//
// Created by Nick Polizogopoulos on 30/5/25.
//

#include <iostream>
#include "loops.h"

// Write a program and ask the user for the number of rows.
// If they enter 5, print this shape:
// *
// **
// ***
// ****
// *****

void starPattern() {
    std::cout << "Exercise: Star Pattern." << std::endl << "=======================================" << std::endl;

    std::cout << "Enter number of rows: ";
    int rows;
    std::cin >> rows;

    for (int row = 1; row <= rows; row++) {

        for (int star = 1; star <= row; star++)
            std::cout << '*';

        std::cout << std::endl;
    }

    std::cout << std::endl;
}