//
// Created by Nick Polizogopoulos on 25/7/25.
//

#ifndef WIDGET_H
#define WIDGET_H

class Widget {
public:
    Widget(bool enabled);
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};

#endif //WIDGET_H
