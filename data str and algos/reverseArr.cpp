//
// Created by htech2 on 2024/08/15.
#include <iostream>
using namespace std;

void revArr(int* arr, int n)
{
    if(n == 0){
        return;
    }
    cout<<arr[n-1]<<" ";
    revArr(arr,n-1);
}

int main()
{
    int arr[] = {1,2,3,4};
    revArr(arr,4);
}
