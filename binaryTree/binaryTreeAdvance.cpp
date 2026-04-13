#include<iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void preOrder(TreeNode *root) {
    if(root== nullptr){
        return;
    }
    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(TreeNode *root) {
    if(root== nullptr){
        return;
    }
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}

void postOrder(TreeNode *root) {
    if(root== nullptr){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<" ";
}

TreeNode * search(TreeNode *root, int value){

    if(root == nullptr) return nullptr;

    if(root->data == value) return root;

    TreeNode *leftResult = search(root->left, value);
    if(leftResult != nullptr) return leftResult;

    return search(root->right, value);
    }

int main(){
    TreeNode * root = new TreeNode(80);
    root->left = new TreeNode(81);
    root->left->left = new TreeNode(82);
    root->left->left->right = new TreeNode(83);
    root->left->left->right->left = new TreeNode(84);

    root->right = new TreeNode(91);
    root->right->right = new TreeNode(92);

    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
}
