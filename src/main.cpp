#include <iostream>
#include "queue_array.hpp"
#include "queue_list.hpp"
#include <assert.h>
using namespace std;


//Sandbox for testing.
int main(int argc, char const *argv[])
{
    Queue_array l1 = Queue_array(4);
    
    assert(l1.empty());
    l1.enqueue(2);
    l1.enqueue(4);
    
    assert(l1.full() == false);

    l1.enqueue(6);
    l1.enqueue(8);

    assert(l1.full());

    assert(l1.dequeue() == 2);
    assert(l1.dequeue() == 4);

    cout << "Array list!\n";

    Queue_list l2 = Queue_list(4);

    assert(l2.empty());
    l2.enqueue(2);
    l2.enqueue(4);
    
    assert(l2.full() == false);

    l2.enqueue(6);
    l2.enqueue(8);

    assert(l2.full());

    assert(l2.dequeue() == 2);
    assert(l2.dequeue() == 4);

    cout << "All tests passed!\n";

    return 0;
}
