#include<iostream>
using namespace std ;


// declaring nodes
struct BstNode{
    int data ;
    BstNode* left;
    BstNode* right;

};


BstNode* GetNewNode(int data){
    BstNode* net = new BstNode();
    net->data = data;
    net->left = net->right = NULL;
    return net;


}


BstNode* Insert(BstNode* root, int data){
    if(root ==  NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left= Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

bool Search(BstNode* root, int data){
    if(root == NULL) return false ;
    else if(root->data == data) return true;
    else if(data<= root->data) return Search(root->left,data);
    else return Search(root->right,data);

}

int main(){
    BstNode* root ;
    root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    int number;
    cout<<"Enter number to be searched ";
    cin>>number;
    if(Search(root,number)==true) cout<<"Found";
    else cout<<"NotFound";

}

