#include "stack.h"

int main() {
    Stac s;

    // Push
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack after elements ";
    s.PrintStack();

    // Peek
    cout << "Peek (Top Element): ";
    s.peek();

    // Pop
    s.pop();
    cout << "Stack after one pop: ";
    s.PrintStack();

    // Multiple pops
    s.pop();
    s.pop();
    cout << "Stack after popping elements: ";
    s.PrintStack();

    // Trying to pop when empty
    s.pop();

    // Trying to peek when empty
    s.peek();

    if(s.Empty()){
        cout<<"Stack is Empty";
    }
    if(s.Full()){
        cout<<"Stack is Full";
    }
    return 0;
}
