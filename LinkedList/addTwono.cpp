#include <iostream>
#include<vector>

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to add two numbers represented by linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(); 
    ListNode* temp = dummy; 
    int carry = 0;
    
    while ((l1 != nullptr || l2 != nullptr) || carry) {
        int sum = 0; 
        
        if (l1 != nullptr) {
            sum += l1->val; 
            l1 = l1->next; 
        }
        
        if (l2 != nullptr) {
            sum += l2->val; 
            l2 = l2->next; 
        }
        
        sum += carry; 
        carry = sum / 10; 
        ListNode* node = new ListNode(sum % 10); 
        temp->next = node; 
        temp = temp->next; 
    }
    return dummy->next;
}

// Helper function to create a linked list from an array
ListNode* createList(const std::vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (size_t i = 1; i < vals.size(); ++i) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Helper function to free the allocated memory
void freeList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Main function to test the code
int main() {
    // Create two linked lists
    std::vector<int> vals1 = {2, 4, 3};
    std::vector<int> vals2 = {5, 6, 4};
    
    ListNode* list1 = createList(vals1);
    ListNode* list2 = createList(vals2);
    
    // Add the two numbers
    ListNode* result = addTwoNumbers(list1, list2);
    
    // Print the result
    printList(result);
    
    // Free the allocated memory
    freeList(list1);
    freeList(list2);
    freeList(result);
    
    return 0;
}
