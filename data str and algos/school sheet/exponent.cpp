// exponent.cpp
// Created by htech2 on 2024/07/31.

#include <iostream>
using namespace std;

// Function to calculate the exponentiation of a base number
int exponent(int b, int p) {
    if (p > 0) {
        return b * exponent(b, p - 1); // multiply the base b with itself p times
    } else {
        return 1; // Base case //the recursion will stop here
    }
}

int main() {
    cout << "Exponent: " << exponent(4, 3) << endl;
    return 0;
}

