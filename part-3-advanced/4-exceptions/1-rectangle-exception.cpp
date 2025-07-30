//
// Created by Nick Polizogopoulos on 30/7/25.
//

#include <iostream>
#include "../1-classes/2-rectangle-class/Rectangle.h"

void rectangleException() {

    std::cout << "Rectangle Exception" << std::endl << "=======================================" << std::endl;

    try {
        std::cout << "Set a width for the rectangle: " << std::endl;
        int width;
        std::cin >> width;

        Rectangle rectangle{};
        rectangle.setWidth(width);

        std::cout << "Rectantle's width: " << rectangle.getWidth() << std::endl;
    }
    catch (const std::invalid_argument& exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "End of program." << std::endl;
}