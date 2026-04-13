#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertAtBottom(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head, int value, int pos) {
    Node* newNode = new Node(value);
    if (pos == 1) {
        newNode->next = head;
        if (head != nullptr) head->prev = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) return;
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) temp->next->prev = newNode;
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtBottom(head, 4);
    insertAtBottom(head, 6);
    insertAtBottom(head, 10);
    
    cout << "Original: ";
    display(head);

    insertAtPosition(head, 5, 2);
    cout << "After inserting 5 at position 2: ";
    display(head);

    return 0;
}
