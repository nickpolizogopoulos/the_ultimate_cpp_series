//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>

// Create a basic Calculator.
// Ask the user for two numbers and an operator.
// Print the result of applying the operator to those numbers.

void basicCalculatorUsingSwitch() {

    std::cout << "Exercise: Basic Calculator using Switch." << std::endl << "=======================================" << std::endl;

    double number1;
    double number2;
    char selectedOperator;

    std::cout << "Use this calculator to perform a calculation between two numbers using an operator (e.g., +, -, , /):" << std::endl;

    std::cout << "First number: ";
    std::cin >> number1;

    std::cout << "Operator: ";
    std::cin >> selectedOperator;

    std::cout << "Second number: ";
    std::cin >> number2;

    bool wrongOperator =
        selectedOperator != '+' &&
        selectedOperator != '-' &&
        selectedOperator != '*' &&
        selectedOperator != '/';

    std::cout
        << "-------------------" << std::endl
        << (wrongOperator ? "" : "Calculation: ");

    switch (selectedOperator) {
        case '+':
            std::cout << number1 << " + " << number2 << " = " << number1 + number2;
            break;
        case '-':
            std::cout << number1 << " - " << number2 << " = " << number1 - number2;
            break;
        case '*':
            std::cout << number1 << " * " << number2 << " = " << number1 * number2;
            break;
        case '/':
            std::cout << number1 << " / " << number2 << " = " << number1 / number2;
            break;
        default:
            std::cout << "Invalid operator. Please try again.";
    }

    std::cout << std::endl << std::endl;
}