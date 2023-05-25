class Node {
public:
    int data;
    Node* next;
};

class Stack {
public:
    Node* top;

public:
    Stack();
    void push(int x);
    bool isEmpty();
    int pop();
    void printStack();
    void printElement();
};
