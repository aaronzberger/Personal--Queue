#include "Queue.h"
#include "Node.h"
#include <iostream>

Queue::Queue(int size) 
    : arr{nullptr}, capacity{size}, indexOfLastElement{-1} {
    arr = new node[size];
}

Queue::~Queue() {
    delete [] arr;
}

void Queue::enqueue(node &n) {
    if(isFull()) {
        std::cout << "Can't enqueue. Queue is full" << std::endl;
        return;
    }
    arr[++indexOfLastElement] = n;
}

void Queue::dequeue() {
    if(isEmpty()) {
        std::cout << "Can't dequeue. Queue is empty" << std::endl;
        return;
    }
    for(int i{0}; i < indexOfLastElement; i++)
        arr[i] = arr[i + 1];
    indexOfLastElement--;
}

void Queue::display() {
    if(isEmpty())
        std::cout << "Queue is empty" << std::endl;
    else {
        for(int i{0}; i <= indexOfLastElement; i++)
            std::cout << "Position " << i << ": " << arr[i].data << std::endl;
    }
    std::cout << std::endl;
}

node Queue::peek() {
    return arr[0];
}

