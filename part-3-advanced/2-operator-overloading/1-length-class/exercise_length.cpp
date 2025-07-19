//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include <iostream>
#include "Length.h"

void exerciseLength() {

    const Length first{10};
    const Length second{10};

    const int number = 10;

    std::cout
        << "The two objects are "
        << (first == second ? "equal." : "not equal.") << std::endl;

    std::cout
        << "The first object value is "
        << (first == number ? "equal " : "not equal ")
        << "with the number " << number << std::endl;
}