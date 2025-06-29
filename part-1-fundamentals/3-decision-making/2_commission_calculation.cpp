//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>
#include "decision_making.h"

// Sales                    Commission
// Up to $10.000            10%
// $10.000 to $15.000       15%
// Over $15.000             20%

// Use the chart to set the Commission based on the value of the sales.

void commissionCalculation() {

    std::cout << "Exercise: Commission Calculation." << std::endl << "=======================================" << std::endl;

    double sales;
    short commission;
    std::cout << "Enter sales: ";
    std::cin >> sales;

    if (sales <= 10'000)
        commission = 10;
    else if (sales <= 15'000)
        commission = 15;
    else
        commission = 20;

    std::cout << "Commission: " << commission << "%";

    std::cout << std::endl << std::endl;
}