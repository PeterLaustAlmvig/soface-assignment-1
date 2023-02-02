#ifndef INT_QUEUE_HPP
#define INT_QUEUE_HPP

class Int_queue {
public:
    virtual void enqueue(int) = 0;
    virtual int dequeue() = 0;
    virtual bool empty() = 0;
    virtual bool full() = 0;
    virtual ~Int_queue() {};

};

#endif