//
// Created by htech2 on 2024/06/15.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;

void insertAtB(int val)
{
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

void insertEnd(int val)
{
    Node* newnode = new Node();
    newnode->data = val;

    if(head == nullptr){
        head = newnode;
        return;
    }
    Node* last = head;
    while(last->next != nullptr){
        last = last->next;
    }
    last->next  = newnode;
}

void DisplayALL()
{
    Node* ptr = head;
    while(ptr != nullptr){
        cout<<ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void insertAtPos(int pos, int val)
{
    Node* newnode = new Node();
    newnode->data = val;
    if(pos==0 || head==nullptr){
        newnode->next = head;
        head = newnode;
        return;
    }

    Node* ptr = head;
    for(int i = 1; i < pos && ptr->next!=nullptr; i++){
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}
// Delete

void DeleteB()
{
    if(head == nullptr)
        return;
    Node* ptr = head;
    head = head->next;
    delete ptr;
}

void DeleteEnd()
{
    if(head == nullptr)
        return;
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* ptr = head;
    while(ptr->next->next != nullptr){
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = nullptr;
}

void DeleteAtPos(int pos)
{
    if(head == nullptr)
        return;
    if(pos ==0){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* ptr = head;
    for(int i =1; i < pos && ptr->next != nullptr; i++){
        ptr = ptr->next;
    }
    Node* temp = ptr->next;
    ptr->next = ptr->next->next;
    delete temp;
}

int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    DisplayALL();
    insertAtPos(1,5);
    DisplayALL();

}
