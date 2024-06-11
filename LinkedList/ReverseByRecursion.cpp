#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
    
        // Recursive step:
        // Reverse the linked list starting 
        // from the second node (head->next).
        ListNode* newHead = reverseList(head->next);
    
        // Save a reference to the node following
        // the current 'head' node.
        ListNode* front = head->next;
    
        // Make the 'front' node point to the current
        // 'head' node in the reversed order.
        front->next = head;
    
        // Break the link from the current 'head' node
        // to the 'front' node to avoid cycles.
        head->next = NULL;
    
        // Return the 'newHead,' which is the new
        // head of the reversed linked list.
        return newHead;
    }
};

// Function to create a new node
ListNode* newNode(int data) {
    ListNode* temp = new ListNode(data);
    temp->next = nullptr;
    return temp;
}

// Function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list 1->2->3->4->5
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    cout << "Original list: ";
    printList(head);

    Solution sol;
    head = sol.reverseList(head);
    
    cout << "Reversed list: ";
    printList(head);

    return 0;
}
