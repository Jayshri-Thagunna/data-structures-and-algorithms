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

void reverse(Node* &head) {
    Node* temp = nullptr;
    Node* current = head;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        head = current;
        current = current->prev;
    }
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
    insertAtBottom(head, 5);
    insertAtBottom(head, 6);
    insertAtBottom(head, 10);
    
    cout << "Original: ";
    display(head);

    reverse(head);
    cout << "Reversed: ";
    display(head);

    return 0;
}
