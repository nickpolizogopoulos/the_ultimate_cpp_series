//
// Created by Nick Polizogopoulos on 6/7/25.
//

#include "TextBox.h"

TextBox::TextBox(bool enabled, const std::string &value) : Widget(enabled), value{value} {}

std::string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const std::string& value) {
    this->value = value;
}