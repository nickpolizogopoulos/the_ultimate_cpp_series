//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include "TextBox.h"

// part of demo
// TextBox::TextBox(bool enabled, const std::string &value) : value{value} {}

// part of demo
// TextBox::~TextBox() {
//     std::cout << "TextBox destructed." << std::endl;
// }

std::string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const std::string& value) {
    this->value = value;
}