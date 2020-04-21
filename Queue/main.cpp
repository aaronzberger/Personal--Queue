#include <iostream>
#include "Queue.h"
#include "Node.h"

int main() {
    
    node aaron;
    aaron.data = 17;
    
    node gabby;
    gabby.data = 14;
    
    Queue queue;
    
    queue.enqueue(aaron);
    queue.display();
    
    std::cout << std::endl;
    return 0;
}