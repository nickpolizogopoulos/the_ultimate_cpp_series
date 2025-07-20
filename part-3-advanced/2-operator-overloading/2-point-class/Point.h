//
// Created by Nick Polizogopoulos on 19/7/25.
//

#ifndef POINT_H
#define POINT_H

#include <ostream>

class Point {
public:
    Point(int x, int y);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    bool operator==(const Point& other) const;
private:
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

#endif //POINT_H
