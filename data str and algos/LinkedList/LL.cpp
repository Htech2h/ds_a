//
// Created by h.tech2 on 2024/06/13.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void transverseLL(Node* head){
    Node* current = head;

    while(current != nullptr){
        cout<< current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

bool searchLL(Node* head , int target)
{
    Node* ptr = head;
    while(ptr != nullptr){
        if(ptr->data == target)
            return true;
        ptr = ptr->next;
    }
    return false;
}

int find_length(Node* head)
{
    int sum = 0;
    Node* ptr = head;
    while(ptr != nullptr){
        sum++;
        ptr = ptr->next;
    }
    return sum;
}

void add_Beginning(Node*& headRef, int value)
{
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = headRef;

    headRef = new_node;
}

void insert_end(Node** headRef , int val)
{
    Node* newnode = new Node();
    newnode->data = val;

    Node* last = * headRef;
    if(*headRef == nullptr){
        *headRef = newnode;
        return;
    }

    while(last->next != nullptr){
        last = last->next;
    }
    last->next = newnode;
}

void deleteEnd(Node** head)
{
    if(*head == nullptr){
        return;
    }
    Node* temp = *head;
    if(temp->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}


int main()
{
    Node* h = new Node{1};
    Node* s = new Node{2};
    Node* t = new Node{3};

    h->next = s;
    s->next = t;
    add_Beginning(h,0);
    insert_end(&h,4);
    transverseLL(h);
    cout<< searchLL(h,3)<<endl;
    cout<<find_length(h)<<endl;


    delete h;
    delete s;
    delete t;
}


