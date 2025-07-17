//
// Created by Nick Polizogopoulos on 9/7/25.
//

#include <iostream>
#include "RectangleLesson.h"

RectangleLesson::RectangleLesson(const RectangleLesson& source) {
    std::cout << "Rectangle Copied!" << std::endl;
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
}

RectangleLesson::RectangleLesson(double width, double height) {
    std::cout << "Constructing a Rectangle" << std::endl;
    setWidth(width);
    setHeight(height);
}

RectangleLesson::RectangleLesson(
    double width,
    double height,
    const std::string& color
) : RectangleLesson(width, height) {
    std::cout << "Constructing a Rectangle with Color" << std::endl;
    this->color = color;
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
