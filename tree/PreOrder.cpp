#include <iostream>
using namespace std;

// Structure for BST node
struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

// Function to create a new node
BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
BstNode* Insert(BstNode* root, int data) {
    if (root == NULL) {
        root = GetNewNode(data);
    }
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

// Function to print nodes of BST in preorder traversal
void PreorderTraversal(BstNode* root) {
    if (root == NULL) return;
    cout << root->data << " "; // Print data of current node
    PreorderTraversal(root->left); // Recursive call on left subtree
    PreorderTraversal(root->right); // Recursive call on right subtree
}

int main() {
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);

    cout << "Preorder traversal of the BST: ";
    PreorderTraversal(root);
    return 0;
}
