//
// Created by htech2 on 2024/06/19.
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

struct Queue{
    Node* front,*back;
    Queue(){
        front = back = nullptr;
    }
    void EnQueue(int val){
        Node* ptr = new Node(val);
        //ptr->data = val;
        if(back == nullptr){
            front = back = ptr;
            return;
        }
        back->next = ptr;
        back = ptr;
    }

    void deQueue(){
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

    void Displayer(){
        Node* ptr = front;
        while(front != nullptr){
            cout<< front->data<<endl;
            front = front->next;
        }
    }

};

int main()
{
    Queue q;
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.EnQueue(4);
    q.deQueue();
    q.Displayer();
}
