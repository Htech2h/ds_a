//
// Created by htech2 on 2024/07/30.
#include <iostream>
#include <cmath>
using  namespace std;

double sqrt(int n, double r=0.0)
{
    if (r == 0.0) {
        r = n / 2.0;
    }
    double prev=r;
    r = (r + n/r)/2.0;

    if((abs(prev-r)) > 0.0001){
        return sqrt(n,r);
    }else{
     return r;
    }
}

int main()
{
    double n = sqrt(25);
    cout<<n;
}
