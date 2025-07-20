//
// Created by Nick Polizogopoulos on 25/5/25.
//

#include <iostream>
#include "playground.h"

#include "../part-3-advanced/2-operator-overloading/1-length-class/Length.h"

void playground() {

    // int x = 10;
    // int y = 20;
    //
    // auto result = x <=> y;
    //
    // if (result == std::strong_ordering::greater)
    //     std::cout << "Greater" << std::endl;
    //
    // if (result == std::strong_ordering::less)
    //     std::cout << "Less" << std::endl;
    //
    // if (result == std::strong_ordering::equal)
    //     std::cout << "Equal" << std::endl;
    //
    //
    // std::cout << "Hello Playground!" << std::endl;

    Length length{10};

    std::cout << length;
}
