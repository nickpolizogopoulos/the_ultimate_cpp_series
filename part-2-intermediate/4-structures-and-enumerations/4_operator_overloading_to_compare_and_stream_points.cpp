//
// Created by Nick Polizogopoulos on 28/6/25.
//
#include <iostream>
#include "structures_and_enumerations.h"

struct Point {
    int x;
    int y;
};

bool operator==(const Point& first, const Point& second) {
    return first.x == second.x && first.y == second.y;
}

// =============== Disabled to avoid duplicate symbol error. ========================
// Only one Stream Insertion Operator Overload (operator<<) can be active at a time.

// std::ostream& operator<<(std::ostream& stream, const Point& point) {
//     return stream << "(" << point.x << ", " << point.y << ")";
// }

void operatorOverloadingToCompareAndStreamPoints() {

    // std::cout << "Exercise: Operator Overloading to Compare and Stream Points" << std::endl << "=======================================" << std::endl;
    //
    // Point p1{}, p2{};
    // std::cout << "Define two points with x and y coordinates." << std::endl;
    //
    // std::cout << "First point x: ";
    // std::cin >> p1.x;
    // std::cout << "First point y: ";
    // std::cin >> p1.y;
    //
    // std::cout << "Second point x: ";
    // std::cin >> p2.x;
    // std::cout << "Second point y: ";
    // std::cin >> p2.y;
    //
    // std::cout << std::endl << "Your Points are " << (p1 == p2 ? "equal." : "not equal.") << std::endl;
    // std::cout << "First point: " << p1 << "." << std::endl;
    // std::cout << "Second point: " << p2 << "." << std::endl;
    //
    // std::cout << std::endl;
}