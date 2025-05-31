//
// Created by Nick Polizogopoulos on 31/5/25.
//

#include <array>
#include <iostream>
#include "arrays.h"

void copyFromOneArrayToAnother() {

    std::cout << "Exercise: Copy from one Array to another" << std::endl << "=======================================" << std::endl;

    int firstArray[3];
    int secondArray[std::size(firstArray)];

    std::cout << "Fill an empty array with three integer numbers." << std::endl;

    for (int i = 0; i < std::size(firstArray); i++) {
        std::cout << "Enter number #" << i + 1 << ": ";
        int arrayElement;
        std::cin >> arrayElement;
        firstArray[i] = arrayElement;
    }

    for (int i = 0; i < std::size(firstArray); i++)
        secondArray[i] = firstArray[i];

    std::cout << "Here is your copy: int myArray[] = { ";
    for (int i = 0; i < std::size(firstArray); i++) {
        bool lastElement = i == std::size(firstArray) - 1;
        std::cout << secondArray[i] << (lastElement ? " " : ", ");
    }
    std::cout << "};";

    std::cout << std::endl << std::endl;
}