// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 10, 2022
// This program asks the user to enter an integer, n and a string
// then it uses a loop to return a larger string that is n copies
// of the original string.
# include <iostream>

void copyString() {
    // initialize the loop counter and the string copy
    int loopCounter = 0;
    int userNumberInt;
    std::string userNumberString;
    std::string userString;
    std::string stringCopy = "";


    // get user input as string
    std::cout << "\033[1;36;38mEnter a string: ";
    std::cin >> userString;
    std::cout << "\033[1;36;38mEnter a number: ";
    std::cin >> userNumberString;

    try {
        // convert user number string to int
        userNumberInt = std::stoi(userNumberString);
        std::cout << "" << std::endl;

        // checks to see if user number int is a whole number
        if (userNumberInt > 0) {
            // calculate the copies of the user string using the user number int
            for (loopCounter = 0; loopCounter < userNumberInt; loopCounter++) {
                stringCopy = stringCopy + userString;
            }
            std::cout <<"\033[1;33;38mOriginal string is: " <<userString<< std::endl;
            std::cout <<"\033[1;33;38mNew string is: " <<stringCopy<< std::endl;
            std::cout << "" << std::endl;
        } else {
            std::cout <<userNumberString<< "\033[1;32;38m is not a valid input."
                      "Enter a positive number.\n";
            std::cout << "" << std::endl;
    }
    // tells the user that they did not enter a number
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout <<userNumberString<< "\033[1;31;38m is not a number."
                  "Please try again.\n";
        std::cout << "" << std::endl;
    }
     std::cout << "\033[1;35;38mThanks for playing.";
}

int main() {
    // This function calls other functions in the program

    // call function
    copyString();
}
