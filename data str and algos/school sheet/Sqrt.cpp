// sqrt_function.cpp
// Created by htech2 on 2024/07/31.

#include <iostream> // for input and output
#include <cmath> // Include c_math library for maths func in this case abs()
using namespace std; //  to avoid prefixing std:: everytime cin and cout are use

//  using the Newton method
double sqrt(int n, double r = 0.0) {
    if (r == 0.0) { // Check if the initial guess r is 0
        r = n / 2.0; // 1st approximation: half of n
    }
    double prev_r = r; // Store the previous approximation
    r = (r + n / r) / 2.0; // Calculate new approximation
    if (abs(r - prev_r) > 0.00001) { // Check if the difference is greater than the threshold
        return sqrt(n, r); // the approximation is updated with next func call
    } else {
        return r; // If the approximation is accurate enough, return the result
    }
}

int main() {
    int n;
    cout<<"Enter number you want sqrt of"<<endl;
    cin>>n;
    cout << "Square root: " << sqrt(n) << endl; // pass one Argument
    return 0;
}

