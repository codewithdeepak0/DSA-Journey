#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //New node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp =  temp -> next;
    }
    cout << endl;
}

int main(){

    //Created a new node
    Node* nodeobj = new Node(10);

    // cout << nodeobj -> data << endl;
    // cout << nodeobj -> next << endl;

    //Head pointed to nodeobj
    Node* head = nodeobj;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);
    
    return 0;
}