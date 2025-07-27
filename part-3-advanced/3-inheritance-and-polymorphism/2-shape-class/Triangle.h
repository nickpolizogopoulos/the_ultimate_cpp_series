//
// Created by Nick Polizogopoulos on 27/7/25.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
public:
    void draw() const override;
};

#endif //TRIANGLE_H
