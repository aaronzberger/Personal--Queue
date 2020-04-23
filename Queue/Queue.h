#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "Node.h"

class Queue {
private:
    node *arr;
    int capacity;
    int indexOfLastElement;
    static constexpr const int default_size = 10;
public:
    Queue(int size = default_size);
    ~Queue();
    
    void enqueue(node &n);
    void dequeue();
    node peek();
    
    bool isEmpty() { return (indexOfLastElement == -1); }
    bool isFull() { return (indexOfLastElement == (capacity - 1)); }
    
    int getSize() { return capacity; }
    
    void display();
};

#endif // _QUEUE_H_
