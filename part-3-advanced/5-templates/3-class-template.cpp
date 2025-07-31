//
// Created by Nick Polizogopoulos on 31/7/25.
//

#include <iostream>
#include <__ostream/basic_ostream.h>

#include "Pair.h"

void classTemplate() {

    Pair pair{"age", 33};
    auto key = pair.getKey();
    auto value = pair.getValue();

    std::cout << key << ": " << value << std::endl;
}