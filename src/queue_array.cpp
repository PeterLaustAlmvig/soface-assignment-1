#include "queue_array.hpp"
#include <assert.h>

Queue_array::Queue_array(int size){
    max = size;
    queue = new int[size];
}

void Queue_array::enqueue(int num){
    assert(size < max);
    queue[size] = num;
    size++;
}

int Queue_array::dequeue(){
    assert(size > 0);
    int dqd = queue[0];
    for(int i = 1; i <= size; i++){
        queue[i - 1] = queue[i];
    }
    size--;
    return dqd;
}

bool Queue_array::empty(){
    return size == 0;
}

bool Queue_array::full(){
    return size == max;
}

Queue_array::~Queue_array(){
    delete queue;
}