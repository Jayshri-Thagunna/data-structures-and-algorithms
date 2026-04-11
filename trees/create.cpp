#include<iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(TreeNode *root) {
    // left -> root -> right

    if(root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);
}

void preorder(TreeNode *root) {
    // root -> left -> right

    if(root == nullptr) {
        return;
    }

    cout << root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode *root) {
    // left -> right -> root

    if(root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" ";
}

int main() {
    TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
    root->left->left = new TreeNode(7);

    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout <<"Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout <<"Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout <<"Postorder traversal: ";
    postorder(root);
}