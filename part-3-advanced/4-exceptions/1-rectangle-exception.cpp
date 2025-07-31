//
// Created by Nick Polizogopoulos on 30/7/25.
//

#include <iostream>
#include "../1-classes/2-rectangle-class/Rectangle.h"

void rectangleException() {

    std::cout << "Rectangle Exception" << std::endl << "=======================================" << std::endl;

    try {
        std::cout << "Set a width for the rectangle: ";
        int width;
        std::cin >> width;

        Rectangle rectangle{};
        rectangle.setWidth(width);

        std::cout << "Rectantle's width: " << rectangle.getWidth() << std::endl;
    }

    // handling out_of_range.
    catch (const std::out_of_range& exception) {
        std::cout << exception.what() << std::endl;
    }

    // handling every other logic_error.
    catch (const std::logic_error& exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "End of program." << std::endl;
}