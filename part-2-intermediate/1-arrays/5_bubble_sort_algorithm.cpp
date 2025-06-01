//
// Created by Nick Polizogopoulos on 2/6/25.
//

#include <iostream>
#include "arrays.h"

// Implement the Bubble Sort Algorithm.
// Create a function that takes an array of integers and sorts it.

void swap(int array[], int i, int j) {
    int temporary = array[i];
    array[i] = array[j];
    array[j] = temporary;
}

void sort(int array[], int size) {
    for (int pass = 0; pass < size - 1; pass++)

        for (int i = 1; i < size; i++ )
            if (array[i] < array[i - 1])
                swap(array, i, i - 1);
}

void bubbleSortAlgorithm() {

    std::cout << "Exercise: Bubble Sort Algorithm" << std::endl << "=======================================" << std::endl;

    int numbers[5] = { 3, 5, 1, 2, 4 };

    sort(numbers, std::size(numbers));

    for (int i = 0; i < std::size(numbers); i++) {
        bool lastElement = i == std::size(numbers) - 1;
        std::cout << numbers[i] << (lastElement ? " " : ", ");
    }

    std::cout << std::endl << std::endl;
}