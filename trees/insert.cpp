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

void Insert(TreeNode * &root, int data) {
    //Base case
    if(root == NULL){
        root = new TreeNode(data);
        return ;
    }

    if(data < root->data){
        Insert(root->left, data);
    }

    if(data > root->data){
        Insert(root->right, data);
    }
}

void Inorder(TreeNode *root){
    //left -> root -> right

    //Base Case
    if(root == nullptr){
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Preorder(TreeNode *root){
    //root -> left -> right

    //Base Case
    if(root == nullptr){
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);


}

void Postorder(TreeNode *root){
    //left -> right -> root

    //Base Case
    if(root == nullptr){
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data <<" ";

}


int main() {
    TreeNode *root = new TreeNode(8);
    Insert(root, 7);
    Insert(root, 9);
    Insert(root, 6);
    Insert(root, 3);

    Inorder(root);
    cout << endl;
    Preorder(root);
    cout << endl;
    Postorder(root);


}