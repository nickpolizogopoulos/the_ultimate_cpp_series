//
// Created by Nick Polizogopoulos on 23/5/25.
//
#include <iostream>
#include "basics.h"

// Imagine we've made $95.000 dollars from our store. As part of our tax return we have to pay:
// State tax = 4% and County tax = 2%.
// Write code to show total sales as well as the State tax and County tax and total tax on this income.

void runSalesTaxCalculator() {

    std::cout << "Exercise: Sales Tax Calculator" << std::endl << "=======================================" << std::endl;

    double sales = 95000;
    std::cout << "Sales: $" << sales << std::endl << "------------------" << std::endl;

    const double stateTaxRate = .04;
    const double stateTax = sales * stateTaxRate;
    std::cout << "State Tax: $" << stateTax << std::endl;

    const double countyTaxRate = .02;
    const double countyTax = sales * countyTaxRate;
    std::cout << "County Tax: $" << countyTax << std::endl;

    std::cout << "------------------" << std::endl;

    const double totalTax = stateTax + countyTax;
    std::cout << "Total Tax: $" << totalTax << std::endl;

    // Going a step further:
    const double netIncome = sales - (stateTax + countyTax);
    std::cout << "Net Income: $" << netIncome << std::endl;

    std::cout << std::endl << std::endl;
}