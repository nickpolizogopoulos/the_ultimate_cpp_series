//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

bool Point::operator==(const Point &other) const {
    return (x == other.x) && (y == other.y);
}
