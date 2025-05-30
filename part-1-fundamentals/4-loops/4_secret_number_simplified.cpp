//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>
#include "loops.h"

// Declare a secret number.
// Continuously ask the user to guess the secret number.
// Use an infinite loop and simple code.
// No duplicate code.

void secretNumberSimplified() {

    std::cout << "Exercise: Secret Number using Infinite Loop." << std::endl << "=======================================" << std::endl;

    while (true) {
        std::cout << "Guess the secret number: ";
        int guessNumber;
        std::cin >> guessNumber;

        if (guessNumber == 7)
            break;

        std::cout << guessNumber << ": Wrong guess. Try again!" << std::endl;
    }
    std::cout << "You found it, it's 7!";

    std::cout << std::endl << std::endl;
}