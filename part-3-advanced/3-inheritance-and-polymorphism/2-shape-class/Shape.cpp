//
// Created by Nick Polizogopoulos on 26/7/25.
//

#include <iostream>
#include "Shape.h"

// This class is now Abstract.
// void Shape::draw() const {
//     std::cout << "Drawing a Shape" << std::endl;
// }

std::string Shape::getBackground() {
    return background;
}

void Shape::setBackground(std::string background) {
    this->background = background;
}