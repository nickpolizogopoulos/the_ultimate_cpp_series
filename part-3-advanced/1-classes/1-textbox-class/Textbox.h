//
// Created by Nick Polizogopoulos on 6/7/25.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <iostream>

class Textbox {
private:
    std::string value;
public:
    std::string getValue();
    void setValue(const std::string& value);
};

#endif //TEXTBOX_H
