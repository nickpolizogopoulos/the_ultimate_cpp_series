//
// Created by Nick Polizogopoulos on 19/7/25.
//

#include "Length.h"

Length::Length(int value) : value{value} {}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

bool Length::operator<(const Length &other) const {
    return value < other.value;
}

bool Length::operator<=(const Length &other) const {
    return !(value > other.value);
}

bool Length::operator>(const Length &other) const {
    return value > other.value;
}

bool Length::operator>=(const Length &other) const {
    return !(value < other.value);
}