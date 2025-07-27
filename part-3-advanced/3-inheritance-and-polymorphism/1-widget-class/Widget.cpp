//
// Created by Nick Polizogopoulos on 25/7/25.
//

#include "Widget.h"
#include <iostream>

Widget::Widget(bool enabled) : enabled{enabled} {
    std::cout << "Widget constructed." << std::endl;
}

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
