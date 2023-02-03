#ifndef QUEUE_ARRAY_HPP
#define QUEUE_ARRAY_HPP

#include "int_queue.hpp"

class Queue_array : public Int_queue {
private:
    int *queue;
    int index = 0;
    int size = 0;
    int max = 0;

public:
    void enqueue(int) override;
    int dequeue() override;
    bool empty() override;
    bool full() override;
    Queue_array(int);
    ~Queue_array();
};

#endif