//
// Created by Nick Polizogopoulos on 29/5/25.
//

#include <iostream>

// Code this requirement:
//
// In order for an applicant to be eligible for a job, they should be a US citizen and either
// have a BSc or at least two years or work experience.

void jobEligibility () {

    std::cout << "Exercise: Job Eligibility Check Using Logical Operators." << std::endl << "=======================================" << std::endl;

    std::string citizenship;
    std::cout << "Please enter your citizenship (e.g., US, EU): ";
    std::cin >> citizenship;

    std::string degree;
    std::cout << "Do you have a Bachelor's Degree? Type y (yes) or n (no): ";
    std::cin >> degree;

    double experience;
    std::cout << "Please enter your years of experience (e.g. 7): ";
    std::cin >> experience;

    const bool isCitizen = citizenship == "US" || citizenship == "us";
    const bool hasBSc = degree == "Y" || degree == "y";
    const bool hasExperience = experience >= 2;
    const bool isEligibleToWork = isCitizen && (hasBSc || hasExperience);

    std::cout << std::endl << "Eligible to work: " << std::boolalpha << isEligibleToWork;

    std::cout << std::endl << std::endl;
}