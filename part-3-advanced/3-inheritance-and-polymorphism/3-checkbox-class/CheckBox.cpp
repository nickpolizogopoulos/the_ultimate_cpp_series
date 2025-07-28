//
// Created by Nick Polizogopoulos on 28/7/25.
//

#include "CheckBox.h"
#include <iostream>

CheckBox::~CheckBox() {
    std::cout << "Destructing a CheckBox." << std::endl;
}

void CheckBox::draw() const {
    std::cout << "Drawing a CheckBox" << std::endl;
}
