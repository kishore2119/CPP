#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

struct Queue {
    int arr[10000];
    int front, rear;

    Queue() {
        front = rear = -1;
    }

    void enqueue(int value) {
        if (Full()) {
            cout << "Queue is full!\n";
            return;
        }
        if (Empty()) front = 0;
        arr[++rear] = value;
        cout << value << " enqueued.\n";
    }

    void dequeue() {
        if (Empty()) {
            cout << "Queue is empty!\n";
            return;
        }
        front++;
        if (front > rear) front = rear = -1;  // Reset queue
    }

    void peek() {
        if (Empty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << arr[front] << endl;
    }

    int Empty() {
        return front == -1;
    }

    int Full() {
        return rear >= 9999;
    }

    void display() {
        if (Empty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

#endif // QUEUE_H
