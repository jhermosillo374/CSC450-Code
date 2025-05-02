/*
 * Pointers.cpp
 *
 *  Created on: May 2, 2025
 *      Author: jonathan
 */
#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, Num3;

    // Asking the user to enter three integer values
    cout << "Enter first integer: ";
    cin >> Num1;
    cout << "Enter second integer: ";
    cin >> Num2;
    cout << "Enter third integer: ";
    cin >> Num3;

    // Creating pointers to dynamically allocate memory for each value
    int* ptr1 = new int(Num1);
    int* ptr2 = new int(Num2);
    int* ptr3 = new int(Num3);

    // Displays the Values of the numbers and pointers
    cout << "\nValues entered:\n";
    cout << "Num1: " << Num1 << ", *ptr1: " << *ptr1 << endl;
    cout << "Num2: " << Num2 << ", *ptr2: " << *ptr2 << endl;
    cout << "Num3: " << Num3 << ", *ptr3: " << *ptr3 << endl;

    // This delete operator frees the allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}



