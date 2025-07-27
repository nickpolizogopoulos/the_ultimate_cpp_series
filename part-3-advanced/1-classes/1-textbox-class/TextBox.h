//
// Created by Nick Polizogopoulos on 6/7/25.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <iostream>
#include "../../3-inheritance-and-polymorphism/1-widget-class/Widget.h"

class TextBox : public Widget {
public:
    using Widget::Widget;
    explicit TextBox(bool enabled, const std::string& value);
    std::string getValue();
    void setValue(const std::string& value);
private:
    std::string value;
};

#endif //TEXTBOX_H
