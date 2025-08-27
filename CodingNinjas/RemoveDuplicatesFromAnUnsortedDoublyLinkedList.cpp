//https://www.naukri.com/code360/problems/remove-duplicates-from-unsorted-linked-list_1069331
#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node* removeDuplicates(Node* head) {
    if (head == nullptr) return nullptr;

    unordered_set<int> seen;  // Hash set to store unique values
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr) {
        if (seen.find(curr->data) != seen.end()) {
            // Duplicate found, remove it
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            // Add unique value to set
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

/*
Approch: 2 [O(n^2)-> T.C.] Give TLE during execution

Node *removeDuplicates(Node *head) {
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        Node* temp = curr;
        
        while (temp->next != NULL) {
            if (curr->data == temp->next->data) {
                // Duplicate found, remove it
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            } else {
                temp = temp->next;
            }
        }
        
        curr = curr->next;
    }

    return head;
}

*/