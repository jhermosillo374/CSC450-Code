/*
 * StringInput.cpp
 *
 *  Created on: Apr 25, 2025
 *      Author: jonathan
 */
#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenatedString;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Iteration " << (i + 1) << ":\n";

        // Clear any leftover input
        std::cin.clear();

        // Taking first string input
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        // Taking second string input
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        // Concatenating the strings
        concatenatedString = firstString +" "+ secondString;

        // Displaying the concatenated result
        std::cout << "Concatenated String: " << concatenatedString << "\n\n";
    }

    return 0;
}



