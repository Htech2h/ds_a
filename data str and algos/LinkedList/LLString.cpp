//
// Created by htech2 on 2024/06/26.
#include <iostream>
#include <iostream>
using namespace std;

struct Node{
    string data;
    Node* next;
    Node(){
        cout<<"Node created"<<endl;
    }
};

Node* head = nullptr;

void addB(string val)
{
    Node* ptr = new Node();
    ptr->data = val;
    ptr->next= head;
    head = ptr;
}
void addE(string val)
{
    Node* ptr = new Node();
    ptr->data = val;
    if(head == nullptr){
        ptr->next = head;
        head = ptr;
        return;
    }
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = ptr;
}

void addPos(string val, int pos)
{
    Node* ptr = new Node();
    ptr->data = val;
    if(pos == 0 || head == nullptr){
        ptr-> next = head;
        head = ptr;
        return;
    }

    Node* cur = head;
    for(int i =1; i < pos && cur->next != nullptr; i++){
        cur = cur->next;
    }
    ptr->next = cur->next;
    cur->next = ptr;
}

void deleteB()
{
    if(head == nullptr){
        return;
    }
    Node* ptr = head;
    head = head->next;
    delete ptr;
}

void deleteE()
{
    if(head == nullptr){
        return;
    }
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* cur = head;
    while(cur->next->next != nullptr){
        cur = cur->next;
    }
    delete cur->next;
    cur->next = nullptr;
}

void deletePos(int pos)
{
    if(pos ==0 && head == nullptr){
        return;
    }
    if(pos ==0){
        Node* ptr = head;
        head = head->next;
        delete ptr;
        return;
    }
    Node* cur = head;
    for(int i=1; i< pos  && cur->next!= nullptr;i++){
        cur = cur->next;
    }
    Node* ptr = cur->next;
    ptr->next = ptr->next->next;
    delete ptr;
}

void Display()
{
    Node* cur = head;
    while(cur != nullptr){
        cout<< cur->data<<endl;
        cur = cur->next;
    }

}

int main()
{
    addB("12");
    addE("13");
    addPos("12.5",1);
    Display();
}
