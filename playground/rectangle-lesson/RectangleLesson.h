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

    void draw() const;
    double getArea() const;
    double getWidth() const;
    double getHeight() const;

    void setWidth(double width);
    void setHeight(double height);

    static int getObjectsCount();
private:
    double width = 0;
    double height = 0;
    std::string color;

    static int objectsCount;
};

#endif //RECTANGLE_LESSON_H
