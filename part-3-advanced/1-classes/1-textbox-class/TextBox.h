//
// Created by Nick Polizogopoulos on 6/7/25.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <iostream>
#include "../../3-inheritance-and-polymorphism/1-widget-class/Widget.h"

class TextBox : public Widget {
public:
    // part of demo
    // using Widget::Widget;
    // explicit TextBox(bool enabled, const std::string& value);
    ~TextBox();
    void draw() const override final;
    std::string getValue();
    void setValue(const std::string& value);
private:
    std::string value;
};

#endif //TEXTBOX_H
