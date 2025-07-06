//
// Created by Nick Polizogopoulos on 6/7/25.
//
#include <iostream>
#include "Textbox.h"

// Create a class named Textbox with a private member value of type string.
// Provide public getter and setter methods to access and modify this value.

void exerciseTextbox() {

    std::cout << "Exercise: The Textbox Class" << std::endl << "=======================================" << std::endl;

    Textbox textbox;

    textbox.setValue("This is my first C++ Class called \"Textbox\"!");
    const std::string value = textbox.getValue();

    std::cout << value << std::endl << std::endl;

}