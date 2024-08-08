//
// Created by htech2 on 2024/06/28.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node():data(0), next(nullptr){}
};
Node* head = nullptr;

void add(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = head;
    head = ptr;
}

void Display()
{
    Node* cur = head;
    while(cur != nullptr){
        cout<< cur->data<<" ";
        cur = cur->next;
    }
    cout<<endl;
}

Node* reverse(Node* h)
{
    Node dummy;
    Node* current = &dummy;

    while(h != nullptr){
        Node* temp = h;
        h = h->next;
        temp->next = current->next;
        current->next = temp;
    }
    return dummy.next;
}

int main()
{
    add(1);
    add(2);
    add(3);
    Display();
    head = reverse(head);
    Display();
}
