//
// Created by htech2 on 2024/08/25.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
Node* front,*back;

void enqueue(int val)
{
    Node* ptr = new Node(val);
    if(front == nullptr){
        front = back = ptr;
        return;
    }
    back->next = ptr;
    back = ptr;
}

void dequeue()
{
    if(front == nullptr){
        return;
    }
    Node* ptr = front;
    front = front->next;
    if(front == nullptr){
        back = nullptr;
    }
    delete ptr;
}

void display()
{
    Node* ptr = front;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    display();
    return 0;

}
