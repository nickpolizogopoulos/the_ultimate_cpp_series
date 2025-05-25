//
// Created by Nick Polizogopoulos on 23/5/25.
//
#include <iostream>
using namespace std;

// Imagine we've made $95.000 dollars from our store. As part of our tax return we have to pay:
// State tax = 4% and County tax = 2%.
// Write code to show total sales as well as the State tax and County tax and total tax on this income.

void runSalesTaxCalculator() {

    cout << "Exercise: Sales Tax Calculator" << endl << "=======================================" << endl;

    double sales = 95000;
    cout << "Sales: $" << sales << endl << "------------------" << endl;

    const double stateTaxRate = .04;
    const double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    const double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    cout << "------------------" << endl;

    const double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << endl;

    // Going a step further:
    const double netIncome = sales - (stateTax + countyTax);
    cout << "Net Income: $" << netIncome << endl;

    std::cout << std::endl << std::endl;
}