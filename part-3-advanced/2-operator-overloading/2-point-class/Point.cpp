//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include "Point.h"
#include <ostream>

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

Point Point::operator+(const Point &other) const {
    return {x + other.x, y + other.y};
}

Point Point::operator+(int other) const {
    return {x + other, y + other};
}

std::ostream& operator<<(std::ostream& stream, const Point& point) {
    stream << "(" << point.getX() << ", " << point.getY() << ")";
    return stream;
}
