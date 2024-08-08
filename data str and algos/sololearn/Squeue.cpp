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

class Queue{
public:x
    Node* fist;
    Node* back;
    Queue(){
        fist=back= nullptr;
    }
    void enQueue(Node* n)
    {
        if(back == nullptr){
            fist = back=n;
        }else {
            back->next = n;
            back = n;
        }
    }
    void deQueue()
    {
        if (fist == nullptr) {
            throw runtime_error("empty queue");
        }
        Node *ptr = fist;
        fist = fist->next;
        if (fist == nullptr) {
            back = nullptr;
        }
        delete (ptr);
    }
    void display()
    {
        Node* ptr = fist;
        while (ptr != nullptr){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    Node* v1 = new Node(1);
    Node* v2 = new Node(2);
    q.enQueue(v1);
    q.enQueue(v2);
    q.display();

}
