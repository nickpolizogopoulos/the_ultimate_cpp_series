//
// Created by Nick Polizogopoulos on 18/7/25.
//

#include "SmartPointer.h"

SmartPointer::SmartPointer(int *prt) : ptr{prt} {}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}

int& SmartPointer::operator*() {
    return *ptr;
}


