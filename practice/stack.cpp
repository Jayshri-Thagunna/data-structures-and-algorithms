#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
};

class Stack {
    Node * head;
    public:
        Stack() {
            head = NULL;
        }

void display() {
    if(head == NULL){
        cout << "Empty" << endl;
    } else {
        Node * temp = head;
        while(temp != NULL) {
            cout << temp -> data <<" ";
            temp = temp -> next;
        }
        cout << endl;
        }
    }

void Push(int value){
    Node * newNode = new Node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}

void Pop(){
    if(head == NULL){
        cout << "Stack Overflow" << endl;
    } else {
        Node * temp = head;
        head = head -> next;
        delete temp;
    }
}

void Peek(){
    if(head == NULL){
        cout << "Stack is empty"<<endl;
    }else {
        cout << "Top element: " << head->data <<endl;
    }
}

};

int main() {
    Stack s;
    cout << "Stack: ";
    s.display();

    s.Push(4);
    s.Push(5);
    s.Push(6);
    cout << "Stack: ";
    s.display();

    s.Pop();
    cout << "Stack: ";
    s.display();

    s.Peek();
}