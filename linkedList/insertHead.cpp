#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead (Node * &head, int data) {
    Node *nodetoinsert = new Node(data);
    nodetoinsert -> next = head;
    head = nodetoinsert;
};

void print(Node * &head) {
    Node * temp = head;

    while(temp != NULL) {
        cout << temp -> data <<"->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
};

int main() {
    Node *head = new Node(21);
    head -> next = new Node(22);
    head -> next -> next = new Node(23);
    head -> next -> next -> next = new Node(24);
    print(head);

    cout << "After Insertion: " << endl;
    InsertAtHead(head, 50);
    print(head);

}