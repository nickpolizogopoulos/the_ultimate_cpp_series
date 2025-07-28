//
// Created by Nick Polizogopoulos on 25/7/25.
//

#include <iostream>
#include <vector>
#include <memory>
#include "../../1-classes/1-textbox-class/TextBox.h"
#include "../3-checkbox-class/CheckBox.h"

void showWidget(Widget& widget) {
    // widget.enable();
    // std::cout << std::boolalpha << widget.isEnabled() << std::endl;
    widget.draw();
}

void exerciseWidget() {

    // Polymorphism
    // TextBox box;
    // showWidget(box);
    //
    // CheckBox checkBox;
    // showWidget(checkBox);

    // Using raw pointers to draw() the correct messages
    // std::vector<Widget*> widgets;
    // widgets.push_back(new TextBox{});
    // widgets.push_back(new CheckBox{});
    //
    // for (const auto& widget : widgets)

    // Using Smart Pointers - we don't have to delete the pointers.
    std::vector<std::unique_ptr<Widget>> widgets;
    widgets.push_back(std::make_unique<TextBox>());
    widgets.push_back(std::make_unique<CheckBox>());

    for (const auto& widget : widgets)
        widget->draw();


}