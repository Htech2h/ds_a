//
// Created by htech2 on 2024/08/15.
#include <iostream>
using namespace std;

int nSum(int n)
{
    if(n == 0){
        return 0;
    }
    return n + nSum(n-1);
}

int main()
{
    cout<<nSum(4);
}
