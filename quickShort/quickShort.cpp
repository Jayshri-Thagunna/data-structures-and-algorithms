#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *prev;
        Node *next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Finds the last node of the list
Node* getTail(Node* head) {
    while (head != NULL && head->next != NULL)
        head = head->next;
    return head;
}

// Partitioning: uses the last element as the pivot
Node* partition(Node* low, Node* high) {
    int pivot = high->data;
    Node* i = low->prev;

    for (Node* j = low; j != high; j = j->next) {
        if (j->data <= pivot) {
            i = (i == NULL) ? low : i->next;
            swap(i->data, j->data);
        }
    }
    i = (i == NULL) ? low : i->next;
    swap(i->data, high->data);
    return i;
}

void _quickSort(Node* low, Node* high) {
    if (high != NULL && low != high && low != high->next) {
        Node* p = partition(low, high);
        _quickSort(low, p->prev);
        _quickSort(p->next, high);
    }
}

void quickSort(Node* head) {
    Node* tail = getTail(head);
    _quickSort(head, tail);
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(25);
    head->next = new Node(22);
    head->next->prev = head;
    head->next->next = new Node(24);
    head->next->next->prev = head->next;

    cout << "Before Sort: ";
    print(head);

    quickSort(head);

    cout << "After QuickSort: ";
    print(head);

    return 0;
}
