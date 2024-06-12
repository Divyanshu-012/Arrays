#include <iostream>
#include<vector>
using namespace std;



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* fastp = head;
//         ListNode* slowp = head;

//         // Move the fastp pointer N nodes ahead
//         for (int i = 0; i < n; i++) {
//             fastp = fastp->next;
//         }

//         // If fastp becomes NULL,
//         // the Nth node from the end is the head
//         if (fastp == NULL) {
//             return head->next;
//         }

//         // Move both pointers until fastp reaches the end
//         while (fastp->next != NULL) {
//             fastp = fastp->next;
//             slowp = slowp->next;
//         }

//         // Delete the Nth node from the end
//         ListNode* delNode = slowp->next;
//         slowp->next = slowp->next->next;
//         delete delNode;
//         return head;
//     }
// };

// Solution class containing the removeNthFromEnd function
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }

        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int res = cnt - n;
        temp = head;
        while (temp != NULL) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        return head;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(vector<int> vals) {
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

// Main function to test the code
int main() {
    // Create a sample linked list: 1->2->3->4->5
    std::vector<int> vals = {1, 2, 3, 4, 5};
    ListNode* head = createList(vals);

    Solution sol;
    int n = 2; // Remove the 2nd node from the end
    ListNode* result = sol.removeNthFromEnd(head, n);

    // Print the result
    printList(result);

    // Free the allocated memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
