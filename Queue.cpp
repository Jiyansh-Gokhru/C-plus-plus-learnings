#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() { front = rear = nullptr; }
    void enqueue(int val) { // O(1)
        Node* newNode = new Node();
        if (newNode == nullptr) {
            cout << "Queue Overflow (Out of memory)!\n";
            return;
        }
        newNode->data = val;
        newNode->next = nullptr;
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued.\n";
    }

    void dequeue() { 
        if (front == nullptr) {
            cout << "Queue Underflow (Queue is empty)!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr; 
        cout << temp->data << " dequeued.\n";
        delete temp;
    }
    void display() { 
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* ptr = front;
        cout << "Queue (Front to Rear): ";
        while (ptr != nullptr) {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
};