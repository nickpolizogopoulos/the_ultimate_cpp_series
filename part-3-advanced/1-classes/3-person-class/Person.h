//
// Created by Nick Polizogopoulos on 14/7/25.
//

#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    explicit Person(int age);
    int getAge() const;
    void setAge(const int& age);
private:
    int age;
};

#endif //PERSON_H
