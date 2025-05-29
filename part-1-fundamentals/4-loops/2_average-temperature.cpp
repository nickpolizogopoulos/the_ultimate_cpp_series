//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>

// Given a list of temperatures,
// write code to calculate the average temperature.

void averageTemperature() {

    std::cout << "Exercise: Average Temperature Using Range-Based For Loop." << std::endl << "=======================================" << std::endl;

    double temperatures[] = {12.5, 15.8, 18.2, 21.2};
    double total = 0;
    short arrayLength = sizeof(temperatures) / sizeof(double);

    for (double temp : temperatures)
        total += temp;

    double averageTemperature = total / arrayLength;

    std::cout << "Temperatures in °C:" << std::endl;
    for (double temp : temperatures)
        std::cout << temp << std::endl;

    std::cout << "The average is: " << averageTemperature;

    std::cout << std::endl << std::endl;
}