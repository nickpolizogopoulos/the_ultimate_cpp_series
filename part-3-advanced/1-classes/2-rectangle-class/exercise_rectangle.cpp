//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include <iostream>
#include "Rectangle.h"

// Create a class named Rectangle with private members width and height of type double.
// Provide public getter and setter methods to access and modify these values.
// Ensure that neither width nor height can be negative.

void exerciseRectangle() {

    std::cout << "Exercise: The Rectangle Class" << std::endl << "=======================================" << std::endl;

    Rectangle rectangle;

    rectangle.setWidth(10);
    rectangle.setHeight(20);

    double area = rectangle.getArea();

    std::cout << "Rectangle area: " << area;

    std::cout << std::endl << std::endl;
}