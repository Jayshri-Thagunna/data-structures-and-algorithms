#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
    Node *front, *rear;

    public:
        Queue() {
            front = NULL;
            rear = NULL;
        }

    //add a element to the rear
    void enqueue(int x){
        Node* newNode = new Node(x);

        if(rear == NULL){
            front = newNode;
            rear = newNode;
            cout << x << " enqueued into queue" << endl;
            return;
        }
        rear -> next = newNode;
        rear = newNode;
        cout << x <<" enqueued into queue" << endl;
    }

};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
}
