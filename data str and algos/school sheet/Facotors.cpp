//
// Created by htech2 on 2024/07/31.
#include <iostream>
using namespace std;

void FactorsOf_A_number(int n)
{
    cout<<"Factors of "<<n<<": ";
    for(int i =1; i <= (n/2); i++){ // A factor will always be half the number but obvious a num is a factor of itself
        if(n%i ==0)
            cout<<i<<" ";
    }
    cout<<"& "<<n;
}

int main()
{
    int n;
    cout<<"Enter a number you want factors of"<<endl;
    cin>>n;
    FactorsOf_A_number(n);
}
