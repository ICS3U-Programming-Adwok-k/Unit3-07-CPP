// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 31st, 2025
//  This program asks the user's age and it checks
// if the user is 25 years old and above and less
// 40 years old.

#include <iostream>
#include <string>

int main() {
    std::string userAgeAsString;
    int minimumAge = 25;
    int maximumAge = 40;

    std::cout << "Enter your age: ";
    std::cin >> userAgeAsString;

    try {
        int userAge = std::stoi(userAgeAsString);

        if (userAge >= minimumAge && userAge <= maximumAge) {
            std::cout << "You can date my grandchild." << std::endl;
        } else {
            std::cout << "You cannot date my grandchild." << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << userAgeAsString << " is not a valid age!" << std::endl;
    }

    std::cout << "Thank you for playing" << std::endl;
    return 0;
}
