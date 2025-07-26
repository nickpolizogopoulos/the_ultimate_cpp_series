//
// Created by Nick Polizogopoulos on 26/7/25.
//

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    std::string getBackground();
    void setBackground(std::string background);
private:
    std::string background;
};

#endif //SHAPE_H
