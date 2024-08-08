//
// Created by htech2 on 2024/07/24.
#include <iostream>
using namespace std;

void Myfunc()
{
    cout<<"i just got executed";
}

int sum(int k){
    if(k>0){
        return k + sum(k-1);
    }else{
        return 0;
    }
}

int main()
{

    int summ = sum(4);
    cout<<summ;
    return 0;
}
