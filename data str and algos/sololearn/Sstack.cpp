//
// Created by htech2 on 2024/07/07.
#include <iostream>
#include <stdexcept>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top = nullptr;
    }
    void push(Node* ptr)
    {
        ptr->next = top;
        top = ptr;
    }
    void pop()
    {
        if(top == nullptr){
            throw runtime_error("empty stack");
        }
        Node* ptr = top;
        top = top->next;
        delete(ptr);
    }
    void display()
    {
        Node* ptr = top;
        while(ptr != nullptr){
            cout<< ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    Stack s;
    Node* v1 = new Node(2);
    Node* v2 = new Node(1);
    s.push(v1);
    s.push(v2);
    s.display();
    return 0;
}
