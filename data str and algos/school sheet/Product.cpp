//
// Created by htech2 on 2024/07/31.
#include <iostream>
using namespace std;
int product(int n, int m)
{
    if(m>0){ // is m is > o
        return n + product(n, m-1); // add n with itself m times
    }else{
        return 0; // This is the base case// it will also be added to final results but its 0 so :)
    }
}
int main()
{
    int  n,m;
    cout<<"Enter two numbers you want product of"<<endl;
    cin>>n>>m;
    cout<<"Product of two numbers: "<<product(n,m);
}
