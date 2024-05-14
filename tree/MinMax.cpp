#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int FindMin(Node*root){
    if(root ==  NULL){
        cout<<"Error";
        return -1;
    }
    Node* current  = root;

    while(current->left != NULL){
        current = current->left;
    }
    return current->data;
    


}


int FindMax(Node*root){
    if(root ==  NULL){
        cout<<"Error";
        return -1;
    }
    Node* current  = root;

    while(current->right != NULL){
        current = current->right;
    }
    return current->data;
    


}
