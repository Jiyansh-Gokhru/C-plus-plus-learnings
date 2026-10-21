#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// (a) Insert at specific index
Node* insertAtIndex(Node* head, int data, int index) {
    if (index == 0) {
        Node* ptr = new Node();
        ptr->data = data;
        ptr->next = head;
        return ptr;
    }
    Node* p = head;
    int i = 0;
    while (i < index - 1 && p != nullptr) {
        p = p->next;
        i++;
    }
    if (p == nullptr) {
        cout << "Index out of bounds!\n";
        return head;
    }
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// (b) Insert after a given node pointer
void insertAfterNode(Node* prevNode, int data) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be NULL!\n";
        return;
    }
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

// (c) Delete at specific index 
Node* deleteAtIndex(Node* head, int index) {
    if (head == nullptr) return nullptr;
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* p = head;
    int i = 0;
    while (i < index - 1 && p->next != nullptr) {
        p = p->next;
        i++;
    }
    if (p->next == nullptr) {
        cout << "Index out of range.\n";
        return head;
    }
    Node* q = p->next;
    p->next = q->next;
    delete q;
    return head;
}