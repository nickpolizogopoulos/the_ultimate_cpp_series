//
// Created by Nick Polizogopoulos on 6/7/25.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <iostream>
#include "../../3-inheritance-and-polymorphism/1-widget-class/Widget.h"

class Textbox : public Widget {
public:
    Textbox() = default;
    explicit Textbox(const std::string& value);
    std::string getValue();
    void setValue(const std::string& value);
private:
    std::string value;
};

#endif //TEXTBOX_H
