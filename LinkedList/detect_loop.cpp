#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {}
};

  //   ********** TOrtoise and Hare ---OPTIMAL WAY***********

// bool detectCycle(Node* head) {
//     // Initialize two pointers, slow and fast,
//     // to the head of the linked list
//     Node* slow = head;
//     Node* fast = head;

//     // Step 2: Traverse the linked list with
//     // the slow and fast pointers
//     while (fast != nullptr && fast->next != nullptr) {
//         // Move slow one step
//         slow = slow->next;
//         // Move fast two steps
//         fast = fast->next->next;

//         // Check if slow and fast pointers meet
//         if (slow == fast) {
//             return true;  // Loop detected
//         }
//     }

//     // If fast reaches the end of the list,
//     // there is no loop
//     return false;
// }


bool detectLoop(Node* head) {
    // Initialize a pointer 'temp'
    // at the head of the linked list
    Node* temp = head;  
    
    // Create a map to keep track of
    // encountered nodes
    std::unordered_map<Node*, int> nodeMap;  

    // Traverse the linked list
    while (temp != nullptr) {
        // If the node is already in the
        // map, there is a loop
        if (nodeMap.find(temp) != nodeMap.end()) {
            return true;
        }
        // Store the current node
        // in the map
        nodeMap[temp] = 1;
        
        // Move to the next node
        temp = temp->next;  
    }

    // If the list is successfully traversed 
    // without a loop, return false
    return false;
}

// Function to create a new node
Node* newNode(int data) {
    Node* temp = new Node(data);
    temp->next = nullptr;
    return temp;
}

int main() {
    // Creating a linked list 1->2->3->4->5
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Creating a loop for testing: 5->3
    head->next->next->next->next->next = head->next->next;
    
    // Checking if loop is present
    if (detectLoop(head)) {
        cout << "Loop detected!" << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
