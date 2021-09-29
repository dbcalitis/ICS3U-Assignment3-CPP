// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program gives the number of days
//   of the month based on user input

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // This function gives the number of days of the months based on user input
    std::string leapYear;
    std::string userInputString;
    int userInput;

    // input
    std::cout << "Enter the number of the month (ex: January = 1): ";
    std::cin >> userInputString;

    // process & output
    try {
        userInput = std::stoi(userInputString);
        switch (userInput) {
            case 1:
                std::cout << "January has 31 days." << std::endl;
                break;
            case 2:
                // second input
                std::cout << "Is it in a leap year?: ";
                std::cin >> leapYear;

                /* https://stackoverflow.com/questions/313970
                /how-to-convert-an-instance-of-stdstring-to-lower-case */
                std::transform(
                    leapYear.begin(), leapYear.end(), leapYear.begin(),
                [](unsigned char c){ return std::tolower(c); });

                if (leapYear == "yes") {
                    std::cout << "February has 29 days." << std::endl;
                } else if (leapYear == "no") {
                    std::cout << "February has 28 days." << std::endl;
                } else {
                    std::cout << "Invalid Input."
                }
                break;
            case 3:
                std::cout << "March has 31 days." << std::endl;
                break;
            case 4:
                std::cout << "April has 30 days." << std::endl;
                break;
            case 5:
                std::cout << "May has 31 days." << std::endl;
                break;
            case 6:
                std::cout << "June has 30 days." << std::endl;
                break;
            case 7:
                std::cout << "July has 31 days." << std::endl;
                break;
            case 8:
                std::cout << "August has 31 days." << std::endl;
                break;
            case 9:
                std::cout << "September has 30 days." << std::endl;
                break;
            case 10:
                std::cout << "October has 31 days." << std::endl;
                break;
            case 11:
                std::cout << "November has 30 days." << std::endl;
                break;
            case 12:
                std::cout << "December has 31 days." << std::endl;
                break;
            default;
                std::cout << "Invalid Number." << std::endl;
        }
    } catch(...) {
            std::cout << "Invalid Input.";
    }

    std::cout << "\nDone.";
}
