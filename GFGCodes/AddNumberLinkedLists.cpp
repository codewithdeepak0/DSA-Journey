// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

class Solution {
    public:
    Node* reverse(Node* head){
          Node *prev = NULL;
          Node *curr = head;
          Node *next = NULL;
          while(curr != NULL){
              next = prev;
              prev = curr;
              curr = curr->next;
              prev->next = next;
          }
          return prev;
      }
      Node* addTwoLists(Node* num1, Node* num2) {
          Node *l1 = reverse(num1);
          Node *l2 = reverse(num2);
          Node *dummy = new Node(0);
          Node *temp = dummy;
          int carry = 0;
          while(l1 != NULL || l2 != NULL || carry)
          {
              int sum = 0;
              if(l1 != NULL){
                  sum += l1->data;
                  l1 = l1->next;
              }
              if(l2 != NULL){
                  sum += l2->data;
                  l2 = l2->next;
              }
              sum += carry;
              carry = sum/10;
              Node *newNode = new Node( sum % 10);
              temp->next = newNode;
              temp = temp->next;
          }
          Node *ans = reverse(dummy->next);
          while(ans->data == 0){
              ans = ans->next;
          }
          return ans;
      }
  };