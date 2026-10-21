#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class stack{
    private:
        Node* top;
    public:
        stack(){top=nullptr; }

    void push(int val){
        Node* newnode =new Node();
        if (newnode==nullptr){
            cout<<"Overflow stack";
            return;
        }
        newnode->data=val;
        newnode->next=top;
        top=newnode;
        cout<<val<<"Pushed";
    }

    void pull(){
        if(top==nullptr){
            cout<<"Underflow stack";
            return;
        }
        Node* temp=top;
        top=top->next;
        cout<<temp->data<<"popped";
        delete temp;
    }

    int peek(){
        if (top==nullptr){
            cout<<"Stack is empty";
            return 0;
        }
        return top->data;
    }
    
    void display(){
        if (top ==nullptr){
            cout<<"Stack is empty";
            return;
        }
        Node* ptr =top;
        while (ptr->next==nullptr){
            cout<<ptr->data <<"  ->  ";
            ptr=ptr->next;
        }
        cout<<" Null\n";
    }
};