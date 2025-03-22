/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int getLength(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}

