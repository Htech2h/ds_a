//
// Created by htech2 on 2024/07/31.
#include <iostream>
using namespace std;

int HCF(int a, int b){
    if(b != 0){                // repeat this process as long as b is not zero
        int temp= b;             // swap a with b
        b = a %b;               // replace b with a modulo b
        return HCF(temp,b);  // here we replaced a with temp(holds b) and b with a modulo b
    }else{
        return a; // base case is to just return a
    }
}

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"HCF of two numbers(a&b): "<<HCF(a,b);
}