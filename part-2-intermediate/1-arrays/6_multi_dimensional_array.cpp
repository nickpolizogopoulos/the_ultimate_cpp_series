//
// Created by Nick Polizogopoulos on 3/6/25.
//

#include <iostream>
#include "arrays.h"

// Print a mobile phone numeric keypad using a multi-dimensional array:
// 1 2 3
// 4 5 6
// 7 8 9
// * 0 #

const int rows = 4;
const int cols = 3;

void printMultiDimensionalArray(char array[rows][cols]) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++)
            std::cout << array[row][col] << " ";
        std::cout << std::endl;
    }
}

void multiDimensionalArray() {

    std::cout << "Exercise: Multi Dimensional Array" << std::endl << "=======================================" << std::endl;

    char keypad[rows][cols] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'}
    };

    printMultiDimensionalArray(keypad);

    std::cout << std::endl;
}