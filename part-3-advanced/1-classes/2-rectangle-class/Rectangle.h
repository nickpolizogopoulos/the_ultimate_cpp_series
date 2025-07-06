//
// Created by Nick Polizogopoulos on 6/7/25.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    void draw();
    double getArea();

    double getWidth() const;
    double getHeight() const;

    double setWidth(double width);
    double setHeight(double height);
private:
    double width;
    double height;
};

#endif //RECTANGLE_H
