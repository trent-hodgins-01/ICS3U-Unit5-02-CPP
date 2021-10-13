// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/13/2021
// This is the triangle area calculator program
// The user enters in the base and height in cm
// The program displays the area

#include <iostream>

void CalculateArea(int base, int height) {
    // calculate area
    int area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "Area is "<< area << " cm²" << std::endl;
}

main() {
    // this function gets length and width

    int base;
    int height;
    std::string baseAsString;
    std::string heightAsString;

    // input
    std::cout << "Enter in base(cm): ";
    std::cin >> baseAsString;
    std::cout << "Enter in height(cm): ";
    std::cin >> height;
    std::cout << std::endl;

    try {
        base = std::stoi(baseAsString);
        base = std::stoi(baseAsString);

    // call functions
    CalculateArea(base, height);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }

        std::cout << "Done." << std::endl;
}
