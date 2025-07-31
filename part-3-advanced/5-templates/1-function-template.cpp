//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>

template<typename T>
T larger(T first, T second) {
    return (first > second) ? first : second;
}

void functionTemplate() {

    auto result = larger<double>(11, 2.2);
    std::cout << result << std::endl;
}