//
// Created by htech2 on 2024/07/30.
#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    string stdNum;
    int age;
    struct Student* prevadrr; // Node pointing to previous Node
};
struct Student* newNode, *prevNode= nullptr;

void push()
{
    for(int i=0; i<2;i++){
        newNode = new Student;
        cout<<"enter name,stdNum,age "<<endl;
        cin>>newNode->name;
        cin>>newNode->stdNum;
        cin>>newNode->age;
        newNode->prevadrr = prevNode;
        prevNode = newNode;
    }
}

void transverse()
{
    newNode = prevNode;
    while(newNode != nullptr){
        cout<< newNode->name<<" "<<newNode->stdNum<<" "<<" "<<newNode->age<<endl;
        newNode = newNode->prevadrr;
    }
}

void pop()
{
    newNode = prevNode;
    if( newNode->prevadrr == nullptr){
        delete newNode;
        newNode = nullptr;
    }
    else{
        prevNode = newNode->prevadrr;
        delete newNode ;
    }
}

void push(string name, string stdnum, int age)
{
    struct Student* ptr = new Student;
    //
    ptr->name = name;
    ptr->stdNum = stdnum;
    ptr->age = age;

    if (prevNode == nullptr){
        ptr->prevadrr = prevNode;
        prevNode = ptr;
    }else{
        ptr->prevadrr = prevNode;
        prevNode = ptr;
    }


}


int main()
{
    push();
    pop();
    transverse();
    push("htech", "202312", 19);
    transverse();
    return 0;
}
