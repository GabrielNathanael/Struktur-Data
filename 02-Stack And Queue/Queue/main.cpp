#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue myQueue;
    myQueue.enqueue(3);
    myQueue.enqueue(5);
    myQueue.enqueue(7);
    myQueue.printElement();

   

    return 0;
}
