//
// Created by htech2 on 2024/07/31.
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
        return 0;       //if 0 & 1 are passed it will return 0 & 1 respectively// Base Cases
    else if(n==1){
        return 1;        // else the number will be found by adding previous 2 numbers
    }else{
        return fibonacci(n-1) + fibonacci(n-2); //
    }
}

int main()
{
    int n = 25;
    cin>>n;
    cout<<"Some fibonacci numbers: ";
    for(int i=0; i<n; i++){
        cout<< fibonacci(i)<<" ";
    }
    cout<<endl;
}
