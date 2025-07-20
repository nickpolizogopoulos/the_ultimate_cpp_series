//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include "Length.h"
#include <iostream>

Length::Length(int value) : value{value} {}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    this->value = value;
}

// bool Length::operator<(const Length &other) const {
//     return value < other.value;
// }
//
// bool Length::operator<=(const Length &other) const {
//     return !(value > other.value);
// }
//
// bool Length::operator>(const Length &other) const {
//     return value > other.value;
// }
//
// bool Length::operator>=(const Length &other) const {
//     return !(value < other.value);
// }

// The Spaceship Operator replaces all the Comparison Operators above.
std::strong_ordering Length::operator<=>(const Length& other) const {
    return value <=> other.value;
}

Length Length::operator+(const Length &other) const {
    return Length(value + other.value);
}

Length Length::operator+(int other) const {
    return Length(value + other);
}

Length& Length::operator+=(const Length& other) {
    value += other.value;
    return *this;
}

Length& Length::operator=(const Length& other) {
    value = other.value;
    return *this;
}

// =============== Disabled to avoid duplicate symbol error. ========================
// Only one Stream Insertion Operator Overload (operator<<) can be active at a time.

// Overloading the Stream Insertion Operator
std::ostream& operator<<(std::ostream& stream, const Length& length) {
    stream << length.value;
    return stream;
}

std::istream& operator>>(std::istream& stream, Length& length) {
    int value;
    stream >> value;
    // length.setValue(value);
    length.value = value;
    return stream;
}