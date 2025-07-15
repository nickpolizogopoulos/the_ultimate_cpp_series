//
// Created by Nick Polizogopoulos on 14/7/25.
//
#include <iostream>
#include "Person.h"

void showPerson(Person person) {
    std::cout << "Person age is: " << person.getAge() << std::endl << std::endl;
}

void exercisePerson() {

    Person person{20};
    showPerson(person);

}