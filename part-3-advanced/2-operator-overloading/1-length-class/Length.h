//
// Created by Nick Polizogopoulos on 19/7/25.
//

#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <iostream>

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;

    int getValue() const;
    void setValue(int value);
    // bool operator<(const Length& other) const;
    // bool operator<=(const Length& other) const;
    // bool operator>(const Length& other) const;
    // bool operator>=(const Length& other) const;

    // The Spaceship Operator replaces all the Comparison Operators above.
    std::strong_ordering operator<=>(const Length& other) const;
private:
    int value;
};

// =============== Disabled to avoid duplicate symbol error. ========================
// Only one Stream Insertion Operator Overload (operator<<) can be active at a time.

// Overloading the Stream Insertion Operator
// std::ostream& operator<<(std::ostream& stream, const Length& length);

#endif //LENGTH_H
