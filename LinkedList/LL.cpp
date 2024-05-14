// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    
    // constructor
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int  i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }

    return head;
}


int main(){
    vector<int> arr = {12,5,8,7};
    // Node* y = new Node(arr[0], nullptr);
    // // Node y = Node(arr[0], nullptr);  // IT IS AN OBJECT    
    // // cout << y.data;
    // cout<< y->data;
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
}
