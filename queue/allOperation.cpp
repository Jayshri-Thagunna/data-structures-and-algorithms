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

    //remove an element from the front
    int dequeue() {
        if(front == NULL){
            cout << "Queue is empty."<<endl;
            return -1;
        }
        Node *temp = front;
        int dequeuedValue = temp->data;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }
        delete temp;

        return dequeuedValue;
    }

    //front element
    int peek(){
        if(front == NULL){
            cout << " Queue is Empty" << endl;
            return -1;
        }
        return front ->data;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() <<" dequed from queue" << endl;
    cout << "Front element is: "<< q.peek()<<endl;

    return 0;
}
