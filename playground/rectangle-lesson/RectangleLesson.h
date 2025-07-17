//
// Created by Nick Polizogopoulos on 9/7/25.
//

#ifndef RECTANGLE_LESSON_H
#define RECTANGLE_LESSON_H

class RectangleLesson {
public:
    RectangleLesson() = default;
    RectangleLesson(double width, double height);
    RectangleLesson(double width, double height, const std::string& color);
    ~RectangleLesson();
    double getArea();
    void draw() const;

    double getWidth() const;
    void setWidth(double width);

    double getHeight() const;
    void setHeight(double height);

    static int getObjectsCount();
private:
    double width = 0;
    double height = 0;
    std::string color;

    static int objectsCount;
};

#endif //RECTANGLE_LESSON_H
