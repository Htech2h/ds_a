//
// Created by htech2 on 2024/08/25.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*prev;
    Node*next;
    Node(int val){
        data = val;
        prev= nullptr;
        next= nullptr;
    }
};
Node*head,*tail;

void insertAtB(int val)
{
    Node* ptr = new Node(val);
    if(head == nullptr){
        head = tail= ptr;
        return;
    }
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
}

void insertAtEnd(int val)
{
    Node* ptr = new Node(val);
    if(head == nullptr){
        head = tail = ptr;
        return;
    }
    ptr->prev = tail;
    tail->next = ptr;
    tail = ptr;
}

void display()
{
    Node* ptr = head;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void displayFromTail()
{
    Node* ptr = tail;
    while(ptr != nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
    cout<<endl;
}

int main()
{
    insertAtB(1);
    insertAtB(2);
    insertAtB(3);
    insertAtEnd(0);
    display();
    displayFromTail();
}
