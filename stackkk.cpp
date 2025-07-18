#include "stack.h"

int main() {
    Stac s;

    // Testing push
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack after pushing 10, 20, 30: ";
    s.PrintStack();

    // Testing peek
    cout << "Peek (Top Element): ";
    s.peek();

    // Testing pop
    s.pop();
    cout << "Stack after one pop: ";
    s.PrintStack();

    // Testing multiple pops
    s.pop();
    s.pop();
    cout << "Stack after popping all elements: ";
    s.PrintStack();

    // Trying to pop when empty
    s.pop();

    // Trying to peek when empty
    s.peek();

    return 0;
}
