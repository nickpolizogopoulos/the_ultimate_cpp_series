//
// Created by Nick Polizogopoulos on 9/7/25.
//

#include <iostream>
#include "RectangleLesson.h"

RectangleLesson::RectangleLesson(double width, double height) {
    std::cout << "Constructing a Rectangle" << std::endl;
    setWidth(width);
    setHeight(height);
}

void RectangleLesson::draw() const {
    std::cout << "Drawing a rectangle" << std::endl;
    std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

double RectangleLesson::getArea() {
    return width * height;
}

double RectangleLesson::getWidth() const {
    return width;
}

double RectangleLesson::getHeight() const {
    return height;
}

void RectangleLesson::setHeight(double height) {
    if (height < 0)
        throw std::invalid_argument("Height cannot be negative");
    this->height = height;
}

void RectangleLesson::setWidth(double width) {
    if (width < 0)
        throw std::invalid_argument("Width cannot be negative");
    this->width = width;
}
