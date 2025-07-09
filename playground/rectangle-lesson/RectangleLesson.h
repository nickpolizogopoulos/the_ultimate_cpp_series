//
// Created by Nick Polizogopoulos on 9/7/25.
//

#ifndef RECTANGLE_LESSON_H
#define RECTANGLE_LESSON_H

class RectangleLesson {
public:
    RectangleLesson(double width, double height);
    double getArea();
    void draw() const;

    double getWidth() const;
    double getHeight() const;

    void setWidth(double width);
    void setHeight(double height);
private:
    double width = 0;
    double height = 0;
};

#endif //RECTANGLE_LESSON_H
