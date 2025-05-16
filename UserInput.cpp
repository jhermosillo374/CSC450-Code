/*
 * UserInput.cpp
 *
 *  Created on: May 15, 2025
 *      Author: jonathan
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void appendToFile(const std::string& filename) {
    std::ofstream outfile(filename, std::ios::app); // Open in append mode
    if (!outfile) {
        std::cerr << "Error opening file : " << filename << std::endl;
        return;
    }

    std::string userInput;
    std::cout << "Enter text (type 'END' to finish):\n";

    while (true) {
        std::getline(std::cin, userInput);
        if (userInput == "END") break;
        outfile << userInput << std::endl;
    }

    outfile.close();
}

void reverseFileContent(const std::string& inputFilename, const std::string& outputFilename) {
    std::ifstream infile(inputFilename);
    if (!infile) {
        std::cerr << "Error opening input file: " << inputFilename << std::endl;
        return;
    }

    std::string fullContent((std::istreambuf_iterator<char>(infile)),
                             std::istreambuf_iterator<char>());
    infile.close();

    std::reverse(fullContent.begin(), fullContent.end());

    std::ofstream outfile(outputFilename);
    if (!outfile) {
        std::cerr << "Error opening output file: " << outputFilename << std::endl;
        return;
    }

    outfile << fullContent;
    outfile.close();
}

int main() {
    const std::string inputFile = "CSC450_CT5_mod5.txt";
    const std::string reversedFile = "CSC450-mod5-reverse.txt";

    appendToFile(inputFile);
    reverseFileContent(inputFile, reversedFile);

    std::cout << "Data appended and reversed content saved to " << reversedFile << std::endl;
    return 0;
}



