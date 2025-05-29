//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>

// Sales                    Commission
// Up to $10.000            10%
// $10.000 to $15.000       15%
// Over $15.000             20%

// Use the chart to set the Commission based on the value of the sales.

void commissionCalculation() {

    std::cout << "Exercise: Commission Calculation." << std::endl << "=======================================" << std::endl;

    double sales;
    std::cout << "Enter sales: ";
    std::cin >> sales;

    std::cout << "Commission: ";

    if (sales <= 10'000)
        std::cout << "10%";
    else if (sales >= 10'000 && sales <= 15'000)
        std::cout << "15%";
    else
        std::cout << "20%";

    std::cout << std::endl << std::endl;
}