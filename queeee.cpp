#include "Queue.h"

int main() {
    Queue q;
    //enqueue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    //dequeue
    q.dequeue();
    //peek
    q.peek();

    //Multiple dequeue
    q.dequeue();
    q.dequeue();
    //display queue when it is empty
    q.display();

    //trying to get peek when it empty
    q.peek();

    //trying to dequeue when it empty
    q.dequeue();

    //Queue is empty
    if(q.Empty()){
        cout<<"Queue is empty";
    }
    //Queue is full
    if(q.Full()){
        cout<<"Queue is full";
    }

    return 0;
}
