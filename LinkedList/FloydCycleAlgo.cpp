#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to detect a loop using Floyd’s Cycle Detection Algorithm
bool detectLoop(Node* head) {
    Node* slow = head;  // Moves one step at a time
    Node* fast = head;  // Moves two steps at a time

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;  // Cycle detected
        }
    }
    return false;  // No cycle
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a loop for testing
    head->next->next->next->next->next = head->next->next; // 5 → 3 (loop)

    if (detectLoop(head)) {
        cout << "Loop detected in the linked list!" << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}
