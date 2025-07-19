//
// Created by Nick Polizogopoulos on 19/7/25.
//

#ifndef LENGTH_H
#define LENGTH_H

#include <compare>

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    // bool operator<(const Length& other) const;
    // bool operator<=(const Length& other) const;
    // bool operator>(const Length& other) const;
    // bool operator>=(const Length& other) const;

    // The Spaceship Operator replaces all the Comparison Operators above.
    std::strong_ordering operator<=>(const Length& other) const;
private:
    int value;
};

#endif //LENGTH_H
