//
// Created by htech2 on 2024/07/30.
#include <iostream>

using namespace std;

int fib(int n = 8){
    if(n==0)
        return 0;
    if(n==1){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }

}

void fibonacci(int n)
{
    int a =0,b=1, c;
    cout<<a<<" "<<b<<" ";
        c = a+b;
        a =b;
        b=c;
        cout<<c<<" ";
}


int main()
{
   for(int i=0;i<8;i++){
       cout<<fib(i)<<" ";
   }
}
