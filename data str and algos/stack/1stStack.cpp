//
// Created by htech2 on 2024/06/16.
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top = nullptr;
    }
    void push(int val){
        Node* ptr = new Node(val);
        ptr->data = val;
        ptr->next = top;
        top = ptr;
    }
    bool isEmpty(){
        return top == nullptr;
    }
    int peek(){
        if(!isEmpty()){
            return top->data;
        }else{
            exit(1);
        }

    }
    void pop(){
        Node* ptr ;
        ptr = top;
        top = top->next;
        delete ptr;
    }
    void Display(){
        Node* ptr = top;
        while(ptr != nullptr){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.Display();
}