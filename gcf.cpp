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
        // Casting the string inputs to integer
        firstNumInt = std::stoi(firstNumStr);
        // Casting the string inputs to integer
        secondNumInt = std::stoi(secondNumStr);
        // Casting the string inputs to integer
        thirdNumInt = std::stoi(thirdNumStr);
        // Find the smallest number
        // If the first number is smaller than the second and third numbers, then it is the smallest
        if (firstNumInt <= secondNumInt && firstNumInt <= thirdNumInt) {
            // Assign the first number to the smallest variable
            smallest = firstNumInt;
        // If the second number is smaller than the first and third numbers, then it is the smallest
        } else if (secondNumInt <= firstNumInt && secondNumInt <= thirdNumInt) {
            // Assign the second number to the smallest variable
            smallest = secondNumInt;
        } else {
            
            smallest = thirdNumInt;
        } 
        // Find the GCF of the three numbers
        // Set a counter
        for (int counter = smallest; counter > 0; counter--) {
        // Check if the counter is a factor of all three numbers
            if (firstNumInt % counter == 0 && secondNumInt % counter == 0 && thirdNumInt % counter == 0) {
                // If it is, then it is the GCF, and display it
                std::cout << "The GCF of " << firstNumInt << ", " << secondNumInt << ", and " << thirdNumInt << " is: " << counter << std::endl;
                // Break the loop since the GCF is found
                break;
        }
        }
    // The exceptions
    } catch (std::invalid_argument const &e) {
        // Exceptions where enter an invalid input
        std::cout << "Invalid input, please try again." << std::endl;
    }
}