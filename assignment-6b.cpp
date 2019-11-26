// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: RJ Fromm
// Created on: Oct 2019
// This program uses user defined functions

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

void CalculateArea(int radius) {
    // calculate area
    int area;

    // process
    area = (M_PI * pow(radius, 2))/2;

    // output
    std::cout << "The area is " << area << "cm^2" << std::endl;
}

main() {
    // this function gets length and width
    std::string radiusFromUser;
    float radiusFromUserInt;

    // input
    std::cout << "Enter the radius of a circle (cm): ";
    std::cin >> radiusFromUser;
    std::cout << std::endl;
    try {
        radiusFromUserInt = std::stoi(radiusFromUser);

        // call functions
        CalculateArea(radiusFromUserInt);
    } catch(...) {
        std::cout << "invalid number" << std::endl;
    }
}
