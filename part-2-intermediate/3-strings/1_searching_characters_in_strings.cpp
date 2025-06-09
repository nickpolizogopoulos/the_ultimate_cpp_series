//
// Created by Nick Polizogopoulos on 8/6/25.
//
#include <iostream>
#include "strings.h"

// Write a program that asks the user to enter any string.
// Then ask the user to enter any character.
// If the character is found in the string, print "<character> is found in position x".
// Otherwise, print "<character> is not found in <string>".

void searchingCharactersInStrings() {

    std::cout << "Exercise: Searching Characters in Strings" << std::endl << "=======================================" << std::endl;

    std::cout << "Type any string: ";
    std::string input;
    std::cin >> input;

    std::cout << "Type a character to get its position in \"" + input + "\": ";
    char character;
    std::cin >> character;

    int position = input.find(character);

    if (position == -1)
        std::cout << "\"" << character << "\"" << " is not found in \"" + input + "\": ";
    else
        std::cout << "\"" << character << "\"" << " is found in position " << position + 1 << ".";

    std::cout << std::endl << std::endl;
}