//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include <iostream>
#include "Length.h"

void exerciseLength() {

    Length first{10};
    // Length second{20};

    Length second = first;

    // const int number = 10;
    //
    // std::cout << "Set first length: ";
    // std::cin >> first;
    //
    // std::cout << "Set second length: ";
    // std::cin >> second;
    //
    // std::cout
    //     << "The two objects are "
    //     << (first == second ? "equal." : "not equal.") << std::endl;
    //
    // std::cout
    //     << "The first object value is "
    //     << (first == number ? "equal " : "not equal ")
    //     << "with the number " << number << std::endl;
    //
    // Length third = first + second;
    // std::cout << third << std::endl;
    //
    // std::cout << first + 20 << std::endl;

    first = second;

    std::cout << first << std::endl;

}