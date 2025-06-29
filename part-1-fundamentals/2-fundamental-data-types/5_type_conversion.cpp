//
// Created by Nick Polizogopoulos on 27/5/25.
//

#include <iostream>
#include "fundamental_data_types.h"

/* Two integers and a double:
 *
 * int x = 10;
 * int y = 3;
 * double z = x / y;
 * std::cout << z;

 * This will print 3 because we're dividing two integers, and we try to store the result in a double.
 * Change the code so the result of the division is a double type value.
*/

void typeConversion() {

    std::cout << "Exercise: Type Conversion." << std::endl << "=======================================" << std::endl;
    const int x = 10;
    const int y = 3;

    // C++ casting.
    const double z = static_cast<double>(x) / y;
    std::cout << z;

    std::cout << std::endl << std::endl;
}

