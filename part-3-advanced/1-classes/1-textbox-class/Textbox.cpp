//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include "Textbox.h"

std::string Textbox::getValue() {
    return value;
}

void Textbox::setValue(const std::string& value) {
    this->value = value;
}