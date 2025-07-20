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

    // bool operator<(const Length& other) const;
    // bool operator<=(const Length& other) const;
    // bool operator>(const Length& other) const;
    // bool operator>=(const Length& other) const;

    // The Spaceship Operator replaces all the Comparison Operators above.
    std::strong_ordering operator<=>(const Length& other) const;

    Length operator+(const Length& other) const;
    Length operator+(int other) const;

    // Length operator-(const Length& other) const;
    // Length operator-(int other) const;

    // Length operator*(const Length& other) const;
    // Length operator*(int other) const;

    // Length operator/(const Length& other) const;
    // Length operator/(int other) const;

    int getValue() const;
    void setValue(int value);

private:
    int value;
    friend std::ostream& operator<<(std::ostream& stream, const Length& length);
    friend std::istream& operator>>(std::istream& stream, Length& length);
};

// =============== Disabled to avoid duplicate symbol error. ========================
// Only one Stream Insertion Operator Overload (operator<<) can be active at a time.

// Overloading the Stream Insertion Operator
// std::ostream& operator<<(std::ostream& stream, const Length& length);

// Overloading the Stream Extraction Operator
// std::istream& operator>>(std::istream& stream, Length& length);




#endif //LENGTH_H
