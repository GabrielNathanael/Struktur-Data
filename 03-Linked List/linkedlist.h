class Node {
public:
    int value;
    Node* next;

    Node() {
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    void insertToHead(int);
    void insertToTail(int);
    void insertAfter(int, int);
    

    void deleteFromTail();
    void deleteByValue(int);


    void printAll();
  
    LinkedList() {
        head = tail = NULL;
    };
};
