//
// Created by Nick Polizogopoulos on 25/7/25.
//

#include "Widget.h"

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
