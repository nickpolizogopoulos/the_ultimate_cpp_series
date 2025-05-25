//
// Created by Nick Polizogopoulos on 25/5/25.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

/* Write a program to roll a dice.
Everytime we run it, we get two values between 1-6.
To limit the range of the random number, we use this formula:
[rand() % (maxValue - minValue + 1)] + minValue
*/

void rollTheDice() {
    std::cout << "Exercise: " << "Roll the Dice" << std::endl << "=======================================" << std::endl;

    const short minDieValue = 1;
    const short maxDieValue = 6;

    srand(time(nullptr));
    short die1 = (rand() % (maxDieValue - minDieValue + 1)) + minDieValue;
    short die2 = (rand() % (maxDieValue - minDieValue + 1)) + minDieValue;

    std::cout << "Results: " << die1 << " & " << die2;

    std::cout << std::endl << std::endl;
}