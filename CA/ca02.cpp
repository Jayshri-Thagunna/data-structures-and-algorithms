// Binary tree - in order, post order, pre order
#include<iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
    //Inorder
    void Inorder(TreeNode * root){
        if(root == nullptr){
            return;
        }
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }

    //PostOrder
    void Postorder(TreeNode * root){
        if(root == nullptr){
            return;
        }
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }

    //Preorder
    void Preorder(TreeNode * root){
        if(root == nullptr){
            return;
        }
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }


int main(){
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(4);
    root->left->left->right->left = new TreeNode(5);

    root->right = new TreeNode(11);
    root->right->right = new TreeNode(12);

    cout <<"Inorder: "<<endl;
    Inorder(root);
    cout <<endl;
    cout <<"Preorder: "<<endl;
    Preorder(root);
    cout << endl;
    cout <<"Postorder: "<<endl;
    Postorder(root);

}