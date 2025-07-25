//
// Created by Nick Polizogopoulos on 25/5/25.
//

#include <iostream>
#include "playground.h"
#include "../part-3-advanced/1-classes/1-textbox-class/Textbox.h"

void playground() {

    Textbox box;
    box.disable();
    std::cout << "The box is " << (box.isEnabled() ? "enabled." : "disabled.");
}
