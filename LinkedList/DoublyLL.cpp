#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head){

    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    //Insert at start
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    //inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    //Creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){

    Node* nodeobj = new Node(10);
    Node* head = nodeobj;
    Node* tail = nodeobj;

    print(head);

    // cout << getLength(head) << endl;

    insertAtHead(head, 20);
    print(head);
    
    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, tail, 3, 50);
    print(head);

    insertAtPosition(head, tail, 1, 5);
    print(head);

    insertAtPosition(head, tail, 7, 100);
    print(head);

    return 0;
}