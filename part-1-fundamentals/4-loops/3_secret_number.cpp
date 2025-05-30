//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>
#include "loops.h"

// Declare a secret number.
// Continuously ask the user to guess the secret number.

void secretNumber() {

    std::cout << "Exercise: Secret Number." << std::endl << "=======================================" << std::endl;

    const int secretNumber = 7;
    int guessNumber = 0;

    while (secretNumber != guessNumber) {
        std::cout << "Guess the secret number: ";
        std::cin >> guessNumber;
        if (guessNumber != secretNumber)
            std::cout << guessNumber << ": Wrong guess. Try again!" << std::endl << std::endl;
    }
    std::cout << "You found it, it's " << secretNumber << "!";

    std::cout << std::endl << std::endl;
}