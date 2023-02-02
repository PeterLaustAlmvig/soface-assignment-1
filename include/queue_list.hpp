#ifndef QUEUE_LIST_HPP
#define QUEUE_LIST_HPP

#include "int_queue.hpp"

class Queue_list : public Int_queue {
private:
    int size = 0;
    int max;
    Node *front;
    Node *back;

public:
    void enqueue(int) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
    int getSize();
    Queue_list(int);
    ~Queue_list();
};

class Node{
private:
    int value;
    Node *next;
public:
    void setNext(Node*);
    int getData();
    Node* getNext();
    Node(int);
    ~Node();
};

#endif