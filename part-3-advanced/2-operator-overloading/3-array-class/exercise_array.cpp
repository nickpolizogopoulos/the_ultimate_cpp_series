//
// Created by Nick Polizogopoulos on 21/7/25.
//

#include <iostream>
#include "Array.h"
#include "../../../part-3-advanced/5-templates/Pair.h"

void exerciseArray() {

    // Array<int> array{10};
    // array[0] = 1;
    // std::cout << array[0] << std::endl;

    // Class Template Lesson
    Array<int> intArray{10};
    intArray[0] = 1;
    std::cout << intArray[0] << std::endl;

    Array<double> doubleArray{10};
    doubleArray[0] = 1.4;
    std::cout << doubleArray[0] << std::endl;

    Array<std::string> stringArray{10};
    stringArray[0] = "hello";
    std::cout << stringArray[0] << std::endl;

    Array<Pair<std::string, int>> pairs{10};
    pairs[0] = {"Age: ", 33};
}
