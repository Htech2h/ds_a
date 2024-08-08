// factorial.cpp
// Created by htech2 on 2024/07/31.

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n > 0) {                         //check if number is greater than o
        return n * factorial(n - 1); // then multiply the num with every num less than it up to 1
    } else {
        return 1; // Base case
    }
}

int main() {
    int n;
    cout<<"enter a num"<<endl;
    cin>>n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}

