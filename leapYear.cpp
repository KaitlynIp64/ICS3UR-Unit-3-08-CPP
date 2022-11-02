// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program uses a nested if statement

#include <iostream>
#include <string>

int main() {
    // this function uses a nested if statement
    std::string integerAsString;
    int yearInt;

    // input
    std::cout << "Enter a year: ";
    std::cin >> integerAsString;

    // process & output
    try {
        yearInt = std::stoi(integerAsString);

        // process & output
        if (yearInt % 4 == 0 && yearInt % 400 == 0) {
            if (yearInt % 100 == 0) {
                std::cout << "That is a common year.";
            } else {
                std::cout << "That is a leap year.";
            }
        } else {
            std::cout << "That is a leap year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input. ";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
