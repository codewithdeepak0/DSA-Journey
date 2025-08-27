//https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644
/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
 
 int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

Node* kReverse(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    // Count remaining nodes
    int remainingNodes = countNodes(head);
    
    // If remaining nodes are less than k, do not reverse
    if (remainingNodes < k) {
        return head;
    }

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    return prev;
}