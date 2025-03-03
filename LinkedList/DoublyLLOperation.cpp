//Create a doubly linked list without any declare a initial object
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    //Empty List
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    //Insert at start
    if(position == 1){
        insertAtHead(head, tail, data);
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
        insertAtTail(tail, head, data);
        return;
    }

    //Creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head){
    if (position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current->next;
            count++;
        }

        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head, tail, 10);
    print(head);

    insertAtHead(head, tail, 5);
    print(head);

    insertAtTail(tail, head, 20);
    print(head);

    insertAtTail(tail, head, 30);
    print(head);

    insertAtPosition(head, tail, 3, 15);
    print(head);

    insertAtPosition(head, tail, 6, 40);
    print(head);

    deleteNode(3, head);
    print(head);

    deleteNode(5, head);
    print(head);

    return 0;
}