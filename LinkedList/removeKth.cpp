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
void print(Node* head){
    while(head != NULL){
        cout<< head->data << " ";
        head = head->next;
    }
    cout<< endl;
}

Node* delete_K(Node*head,int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;

    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL) {
        cnt++;
        if(cnt == k){
            prev = temp;
            temp = temp->next;

        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}



int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    head = delete_K(head,7);
    print(head);
    

}