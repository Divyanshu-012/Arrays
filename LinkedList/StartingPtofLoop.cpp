#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;  
        ListNode* fast = head;  

        // Phase 1: Detect the loop
        while (fast != nullptr && fast->next != nullptr) {
            // Move slow one step
            slow = slow->next;        
            
            // Move fast two steps
            fast = fast->next->next;  

            // If slow and fast meet, a loop is detected
            if (slow == fast) {
                // Reset the slow pointer to the head of the list
                slow = head; 

                // Phase 2: Find the first node of the loop
                while (slow != fast) {
                    // Move slow and fast one step at a time
                    slow = slow->next;  
                    fast = fast->next;  
                }
                
                // Return the first node of the loop
                return slow;  
            }
        }
        
        // If no loop is found, return NULL
        return nullptr; 
    }
};

// Function to create a new node
ListNode* newNode(int data) {
    ListNode* temp = new ListNode(data);
    temp->next = nullptr;
    return temp;
}

int main() {
    // Creating a linked list 1->2->3->4->5
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Creating a loop for testing: 5->3
    head->next->next->next->next->next = head->next->next;
    
    Solution solution;
    ListNode* loopNode = solution.detectCycle(head);
    
    if (loopNode != nullptr) {
        cout << "Loop detected at node with value: " << loopNode->val << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
