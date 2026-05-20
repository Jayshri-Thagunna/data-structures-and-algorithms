#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
        
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
        
    return root; 
}

Node* search(Node* root, int target) {
    if (root == NULL || root->data == target) {
        return root;
    }
    
    if (root->data > target) {
        return search(root->left, target);
    }
        
    return search(root->right, target);
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    Node* result = search(root, 60);
    
    if (result != NULL) {
        cout << "Element Found: " << result->data << endl;
    } else {
        cout << "Element Not Found" << endl;
    }

    return 0;
}

