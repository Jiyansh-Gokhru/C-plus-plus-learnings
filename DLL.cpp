#include <iostream>
using namespace std;


struct DNode{
    int data;
    DNode* next;
    DNode* prev;
};

// Insertion at Beginning of DLL - O(1)
DNode* insertBeginningDLL(DNode* head, int val) {
    DNode* newNode = new DNode();
    newNode->data = val;
    newNode->prev = nullptr;
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
    return head;
}
// Deletion from Beginning of DLL - O(1)
DNode* deleteBeginningDLL(DNode* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return nullptr;
    }
    DNode* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
    return head;
}