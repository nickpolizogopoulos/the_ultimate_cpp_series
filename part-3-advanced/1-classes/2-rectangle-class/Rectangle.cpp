//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include <iostream>
#include "Rectangle.h"

void Rectangle::draw() {
    std::cout << "Drawing Rectangle" << std::endl;
    std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::setWidth(double width) {
    if (width <= 0)
        throw std::invalid_argument("Width cannot be negative or zero!");
    if (width >= 100)
        throw std::out_of_range("Width cannot be greater than 100!");
    this->width = width;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::setHeight(double height) {
    if (height < 0)
        throw std::invalid_argument("Height cannot be negative");
    this->height = height;
}

