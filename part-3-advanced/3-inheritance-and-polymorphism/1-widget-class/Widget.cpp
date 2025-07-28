//
// Created by Nick Polizogopoulos on 25/7/25.
//

#include "Widget.h"
#include <iostream>

// part of demo
// Widget::Widget(bool enabled) : enabled{enabled} {
//     std::cout << "Widget constructed." << std::endl;
// }

// part of demo (it's now default).
// Widget::~Widget() {
//     std::cout << "Destructing a Widget." << std::endl;
// }

// This method is now a Pure Virtual Method
// void Widget::draw() const {
//     std::cout << "Drawing a Widget." << std::endl;
// }

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
