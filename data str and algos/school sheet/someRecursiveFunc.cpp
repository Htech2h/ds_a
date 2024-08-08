//
// Created by htech2 on 2024/07/31.
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n > 0) { // Check if number is greater than 0
        return n * factorial(n - 1); // Then multiply the num with every num less than it up to 1
    } else {
        return 1; // Base case
    }
}

// Function to calculate the exponentiation of a base number
int exponent(int b, int p) {
    if (p > 0) {
        return b * exponent(b, p - 1); // Multiply the base b with itself p times
    } else {
        return 1; // Base case //the recursion will stop here
    }
}

// Function to calculate the square root using the Newton method
double sqrt(int n, double r = 0.0) {
    if (r == 0.0) { // Check if the initial guess r is 0
        r = n / 2.0; // 1st approximation: half of n
    }
    double prev_r = r; // Store the previous approximation
    r = (r + n / r) / 2.0; // Calculate new approximation
    if (abs(r - prev_r) > 0.00001) { // Check if the difference is greater than the threshold
        return sqrt(n, r); // The approximation is updated with next func call
    } else {
        return r; // If the approximation is accurate enough, return the result
    }
}

// Function to calculate the product of two numbers
int product(int n, int m) {
    if (m > 0) { // If m is > 0
        return n + product(n, m - 1); // Add n with itself m times
    } else {
        return 0; // This is the base case// it will also be added to final results but its 0 so :)
    }
}

// Function to calculate the highest common factor (HCF)
int HCF(int a, int b) {
    if (b != 0) { // Repeat this process as long as b is not zero
        int temp = b; // Swap a with b
        b = a % b; // Replace b with a modulo b
        return HCF(temp, b); // Here we replaced a with temp(holds b) and b with a modulo b
    } else {
        return a; // Base case is to just return a
    }
}

// Function to calculate the Fibonacci sequence
int fibonacci(int n) {
    if (n == 0)
        return 0; // If 0 & 1 are passed it will return 0 & 1 respectively// Base Cases
    else if (n == 1) {
        return 1; // Else the number will be found by adding previous 2 numbers
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); //
    }
}

// Function to display factors of a number
void FactorsOf_A_number(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= (n / 2); i++) { // A factor will always be half the number but obvious a num is a factor of itself
        if (n % i == 0)
            cout << i << " ";
    }
    cout << "& " << n;
}
int x = 0;
int main() {
    int a, n, m; // Variables to hold user inputs
    cout << "Please choose the function you want to run [number(1-7)]" << endl;
    cout << endl << "1: Factorial , 2: Exponent , 3: Square Root" << endl;
    cout << "4: Product   , 5: HCF      , 6: Fibonacci,    7: Factors Of A_Number" << endl;
    cin >> a;

    switch (a) {
        case 1:
            cout << "Enter a number you want the factorial of:" << endl;
            cin >> n;
            cout << "Factorial of " << n << " is: " << factorial(n) << endl;
            break;
        case 2:
            cout << "Enter the base:" << endl;
            cin >> n;
            cout << "Enter the power:" << endl;
            cin >> m;
            cout << "Result: " << exponent(n, m) << endl;
            break;
        case 3:
            cout << "Enter a number to find the square root:" << endl;
            cin >> n;
            cout << "Square root of " << n << " is approximately: " << sqrt(n) << endl;
            break;
        case 4:
            cout << "Enter the first number:" << endl;
            cin >> n;
            cout << "Enter the second number:" << endl;
            cin >> m;
            cout << "Product of " << n << " and " << m << " is: " << product(n, m) << endl;
            break;
        case 5:
            cout << "Enter the first number:" << endl;
            cin >> n;
            cout << "Enter the second number:" << endl;
            cin >> m;
            cout << "HCF of " << n << " and " << m << " is: " << HCF(n, m) << endl;
            break;
        case 6:
            cout << "Enter number:" << endl;
            cin >> n;
            cout<<"fibonacci numbers up to "<<n<<" are: ";
            for(int i=0; i<n; i++){
                x = fibonacci(i);
                cout<< fibonacci(i)<<" ";
            }
            cout<<endl<<"The nth factorial is: "<<x<<endl;
            cout<<endl;
            break;
        case 7:
            cout << "Enter a number to find its factors:" << endl;
            cin >> n;
            FactorsOf_A_number(n);
            cout << endl;
            break;
        default:
            cout << "Invalid choice! Please choose a number between 1 and 7." << endl;
            break;
    }

    return 0;
}

