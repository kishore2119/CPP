#ifndef STAC_H
#define STAC_H

#include <iostream>
using namespace std;

struct Stac {
    int top;
    int arr[10000];

    Stac() {
        top = -1;
    }

    void push(int data) {
        if (Full()) {
            cout << "Stack is Full\n";
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (Empty()) {
            cout << "Stack is Empty\n";
            return;
        }
        top--;
    }

    bool Empty() {
        return top == -1;
    }

    bool Full() {
        return top >= 9999;
    }

    void peek() {
        if (Empty()) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << arr[top] << endl;
    }

    void PrintStack() {
        if (Empty()) {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

#endif // STAC_H
