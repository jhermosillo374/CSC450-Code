/*
 * SyntaxCorrection2.cpp
 *
 *  Created on: Apr 18, 2025
 *      Author: jonathan
 */
#include <iostream>
#include <conio.h> // This is Windows-specific; avoid in portable code

using namespace std;

int main() {
    double myMoney = 1000.50; // this should be printed out

    // Standard Output Statements
    cout << "Please be sure to correct all syntax errors in this program" << endl;
    cout << "I have corrected all errors for this program." << endl;
    cout << "The total amount of money available is = " << myMoney << endl;

    // Wait for user to press a key (only works in some environments)
    _getch(); // or use cin.get() if you want cross-platform compatibility

    return 0;
}



