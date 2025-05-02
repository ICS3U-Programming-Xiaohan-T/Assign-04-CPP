// Copyright 2025 Xiaohan All rights reserved.
// Created by Xiaohan
// Created on Apr 27, 2025
// This program finds the GCF of two numbers

#include <iostream>
#include <string>

int main() {
    // Display welcoming message
    std::cout << "Hello! Welcome to this program!" << std::endl;
    std::string firstNumStr, secondNumStr, thirdNumStr;
    // Declare variables to hold converted integers
    int firstNumInt, secondNumInt, thirdNumInt, smallest;
    // Get input from the user and store it to the related variable
    std::cout << "Please enter the first number as an integer: ";
    std::cin >> firstNumStr;
    std::cout << "Please enter the second number as an integer: ";
    std::cin >> secondNumStr;
    std::cout << "Please enter the third number as an integer: ";
    std::cin >> thirdNumStr;
    // Convert the string inputs to integers
    try {
        firstNumInt = std::stoi(firstNumStr);
        secondNumInt = std::stoi(secondNumStr);
        thirdNumInt = std::stoi(thirdNumStr);
        if (firstNumInt <= secondNumInt && firstNumInt <= thirdNumInt) {
            smallest = firstNumInt;
        } else if (secondNumInt <= firstNumInt && secondNumInt <= thirdNumInt) {
            smallest = secondNumInt;
        } else {
            smallest = thirdNumInt;
        } 
        // Find the GCF of the three numbers
        for (int counter = smallest; counter > 0; counter--) {
            if (firstNumInt % counter == 0 && secondNumInt % counter == 0 && thirdNumInt % counter == 0) {
                std::cout << "The GCF of " << firstNumInt << ", " << secondNumInt << ", and " << thirdNumInt << " is: " << counter << std::endl;
                break;
        }
        }
        // Display the GCF of the three numbers
    } catch (std::invalid_argument const &e) {
        // Exceptions where enter an invalid input
        std::cout << "Invalid input, please try again." << std::endl;
    }
}