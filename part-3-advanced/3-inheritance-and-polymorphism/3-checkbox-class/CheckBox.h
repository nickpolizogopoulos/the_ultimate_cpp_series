//
// Created by Nick Polizogopoulos on 28/7/25.
//

#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "../1-widget-class/Widget.h"

class CheckBox : public Widget {
public:
    ~CheckBox();
    void draw() const override;
};

#endif //CHECKBOX_H
