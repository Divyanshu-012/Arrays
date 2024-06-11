#include <iostream>
#include <stack>
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
        ListNode* temp = head;
        stack<int> st;
        while (temp != nullptr) {
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != nullptr) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
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
