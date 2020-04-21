#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "Node.h"

class Queue
{
private:
    node *head;
    node *tail;
public:
    Queue();
    ~Queue();
    void enqueue(node &n);
    void dequeue();
    void display();
};

#endif // _QUEUE_H_
