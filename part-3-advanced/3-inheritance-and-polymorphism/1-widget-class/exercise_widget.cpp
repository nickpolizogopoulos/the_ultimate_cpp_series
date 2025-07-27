//
// Created by Nick Polizogopoulos on 25/7/25.
//

#include <iostream>
#include "../../1-classes/1-textbox-class/TextBox.h"

void showWidget(Widget& widget) {
    // widget.enable();
    // std::cout << std::boolalpha << widget.isEnabled() << std::endl;
    widget.draw();
}

void exerciseWidget() {

    TextBox box;
    // Widget widget = box;

    // box.draw();

    showWidget(box);

}
