#include "queue_list.hpp"
#include <assert.h>

Node::Node(int num){
    value = num;
}

void Node::setNext(Node *n){
    next = n;
}

int Node::getData(){
    return value;
}

Node* Node::getNext(){
    return next;
}

Node::~Node(){}

Queue_list::Queue_list(int size){
    max = size;
    front = nullptr;
    back = nullptr;
}

void Queue_list::enqueue(int num){
    assert(size < max);
    Node n = Node(num);
    if(back == nullptr)
    {
        back = &n;
        back->setNext(nullptr);
        front = &n;
    }else{
        back->setNext(&n);
        back = &n;
    }
    size++;
}

int Queue_list::dequeue(){
    assert(size > 0);
    int dqd = front->getData();
    size--;
    if(size == 0){
        back = nullptr;
        front = nullptr;
    }else{
        front->setNext(front->getNext());
    }
    return dqd;
}

bool Queue_list::empty(){
    return size == 0;
}

bool Queue_list::full(){
    return size == max;
}

Queue_list::~Queue_list(){
}