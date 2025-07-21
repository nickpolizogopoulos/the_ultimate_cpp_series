//
// Created by Nick Polizogopoulos on 21/7/25.
//

#include "Array.h"
#include <stdexcept>

Array::Array(size_t size) {
    values = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] values;
}

int& Array::operator[](size_t index) {
    if (index >= size)
        throw std::invalid_argument("Array index out of range");
    return values[index];
}