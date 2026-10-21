#include <iostream>
using namespace std;


struct DNode{
    int data;
    DNode* next;
    DNode* prev;
};

struct Node{
    int data;
    Node* next;
};


void display(Node* head){
    if(head==nullptr){
        cout<<"List is empty";
        return;
    };
    Node* ptr=head;
    while (ptr!=nullptr){
        cout<<ptr->data<<"  ->  ";
        ptr=ptr->next;
    }
    cout<<" Null\n";
}

Node* insertatbeigning (Node* head, int val){
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    head=newNode;
    return head;
}

Node* insertatend(Node* head,int val){
    Node* newNode =new Node();
    newNode->data=val;
    newNode->next=nullptr;

    if (head==nullptr)return newNode;
    Node* p =head;
    while(p->next==nullptr){
        p=p->next;
    }
    p->next=newNode;
    return head;
}

Node* deletefrombegining(Node* head){
    if (head==nullptr) {
        cout<<"List is empty";
        return nullptr;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deletefromend(Node* head){
    if (head==nullptr) {
        cout<<"List is empty";
        return nullptr;
    }
    Node* p=head;
    while(p->next->next==nullptr){
        p=p->next;
    }
    delete p->next;
    p->next=nullptr;
    return head;
}

int main(){
    dsipaly()
    display(str);
}