//
// Created by Nick Polizogopoulos on 14/7/25.
//

#include "Person.h"

Person::Person(int age) : age{age} {}

int Person::getAge() const {
    return age;
}

void Person::setAge(const int& age) {
    this->age = age;
}

