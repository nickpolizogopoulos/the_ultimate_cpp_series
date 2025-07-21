//
// Created by Nick Polizogopoulos on 18/7/25.
//

#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class SmartPointer {
public:
    explicit SmartPointer(int* prt);
    ~SmartPointer();
    int& operator*();
private:
    int* ptr;
};

#endif //SMARTPOINTER_H
