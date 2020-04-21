#include "Queue.h"
#include "Node.h"

Queue::Queue() 
    : head{nullptr}, tail{nullptr}{}

Queue::~Queue() {
}

void Queue::enqueue(node &n) {
    node *new = &n;
    if(head == nullptr) {
        head = new;
    } else {
        new->next = nullptr;
        tail->next = new;
    }
    tail = new;
}

void Queue::dequeue() {
    if(head == nullptr) {
        return;
    } else {
        head = head->next;
    }
}

void Queue::display() {
    if(head == nullptr) {
        return;
    } else {
        Node *trav = head;
        while(head != nullptr) {
            std::cout << head->data << std::endl;
        }
    }
}

