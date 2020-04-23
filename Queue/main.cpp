#include <iostream>
#include "Queue.h"
#include "Node.h"

int main() {
    std::cout << "================================" << std::endl;
    
    node n1; n1.data = 10;
    node n2; n2.data = 20;
    node n3; n3.data = 30;
    node n4; n4.data = 40;
    node n5; n5.data = 50;
    node n6; n6.data = 60;

    Queue queue;
    
    queue.enqueue(n1);
    
    queue.display();
    
    queue.dequeue();
    
    queue.display();
    
    queue.enqueue(n2);
    queue.enqueue(n3);
    
    queue.display();
    
    std::cout << "================================" << std::endl;
    
    return 0;
}