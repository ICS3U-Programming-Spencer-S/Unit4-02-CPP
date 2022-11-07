// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Nov 7, 2022
// A program that calculates a
// User input factorial.

#include <iostream>

int main() {
    // Initialization of counter, product, and user input
    int loopCounter = 0;
    int product = 1;
    int inpUserNum;
    std::string userNumberStr;

    // User input
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumberStr;
    std::cout << std::endl;

    // Tries to get the user's number as an integer.
    try {
        inpUserNum = std::stoi(userNumberStr);

        // Exception if the input is not a integer
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, enter a positive integer only!.\n\n";
        return main();
    }

    // Checks if inputs less the 0
    if (inpUserNum < 0) {
        std::cout <<
        "Invalid input, enter a positive integer only!" << std::endl;
    } else {
        // Code to be executed until inp_user_num is equal to the counter
        do {
            loopCounter++;
            product = product * loopCounter;
            std::cout <<
            "Tracked " << loopCounter << " times through the loop\n";
        } while (loopCounter < inpUserNum);
        // Displays user output
        std::cout << inpUserNum << "! =" << product << std::endl;
    }
}

