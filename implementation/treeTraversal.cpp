#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// For BST inorder traversal gives sorted order

void inorder(Node* root){
    if(root == nullptr) return;
    
    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

void preorder(Node* root){
    if(root == nullptr) return;
    
    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}




