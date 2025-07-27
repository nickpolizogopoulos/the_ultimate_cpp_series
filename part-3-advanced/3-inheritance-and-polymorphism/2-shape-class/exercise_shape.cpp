//
// Created by Nick Polizogopoulos on 26/7/25.
//

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

void exerciseShape() {

    std::cout << "Exercise: Basic Shapes" << std::endl << "=======================================" << std::endl;

    Rectangle rectangle;
    rectangle.draw();
    rectangle.setBackground("blue");
    std::cout << "The Rectangle color is " << rectangle.getBackground() << std::endl;

    Triangle triangle;
    triangle.draw();
    triangle.setBackground("red");
    std::cout << "The Triangle color is " << triangle.getBackground() << std::endl;
}