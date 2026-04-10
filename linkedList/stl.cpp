#include <iostream>
#include <list>
using namespace std;

// Print list
void printList(list<int> &l) {
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;
}

// Insert at head
void insertHead(list<int> &l, int value) {
    l.push_front(value);
}

// Insert at end
void insertEnd(list<int> &l, int value) {
    l.push_back(value);
}

// Insert at position (middle)
void insertMiddle(list<int> &l, int pos, int value) {
    if (pos < 0 || pos > l.size()) {
        cout << "Invalid position\n";
        return;
    }

    auto it = l.begin();
    advance(it, pos);
    l.insert(it, value);
}

// Delete head
void deleteHead(list<int> &l) {
    if (!l.empty())
        l.pop_front();
}

// Delete end
void deleteEnd(list<int> &l) {
    if (!l.empty())
        l.pop_back();
}

// Delete at position (middle)
void deleteMiddle(list<int> &l, int pos) {
    if (pos < 0 || pos >= l.size()) {
        cout << "Invalid position\n";
        return;
    }

    auto it = l.begin();
    advance(it, pos);
    l.erase(it);
}

// Reverse list
void reverseList(list<int> &l) {
    l.reverse();
}

// Sort list
void sortList(list<int> &l) {
    l.sort();
}

// Main function
int main() {
    list<int> l;

    // Insert operations
    insertHead(l, 10);
    insertHead(l, 5);
    insertEnd(l, 20);
    insertEnd(l, 25);
    insertMiddle(l, 2, 15); // Insert at index 2

    cout << "After insertions: ";
    printList(l);

    // Delete operations
    deleteHead(l);
    deleteEnd(l);
    deleteMiddle(l, 1);

    cout << "After deletions: ";
    printList(l);

    // Reverse
    reverseList(l);
    cout << "After reverse: ";
    printList(l);

    // Sort
    sortList(l);
    cout << "After sort: ";
    printList(l);

    return 0;
}