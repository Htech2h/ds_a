//
// Created by htech2 on 2024/08/06.
#include <iostream>
using namespace std;
int ptr = -1;
int arr[10];

bool isFull()
{
    if(ptr == 10)
        return true;
    else{
        return false;
    }
}

void push(int val)
{
    if(isFull())
        cout<<"stack is full"<<endl;
    else{
        arr[ptr] = val;
        ptr++;
    }
}

void pop()
{
    ptr--;
    arr[ptr] = 0;
}

int peek()
{
    for(int i=9; i>=0; i--){
        if (arr[i] != 0)
            return arr[i];
    }
    return 0;
}

void transverse()
{
    for(int i=0; i< 10; i++){
        cout << arr[i]<< "  ";
    }
}

int main()
{
    for(int i=0; i<10; i++){
        arr[i] = 0;
    }
    ptr++;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    pop();
    push(8);
    push(9);
    transverse();

    cout<<endl<<"peek "<<peek() <<endl;

}
