//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include "Textbox.h"


Textbox::Textbox(const std::string &value) : value{value} {}

std::string Textbox::getValue() {
    return value;
}

void Textbox::setValue(const std::string& value) {
    this->value = value;
}