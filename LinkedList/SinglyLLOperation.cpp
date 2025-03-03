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

   //Destructor
   ~Node(){
    int value = this->data;
    //Memory free
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout << "Memory is free for node with data " << value << endl;
   }
}; 

void insertAtHead(Node* &head, int data){
   //New node create
   Node* temp = new Node(data);
   temp -> next = head;
   head = temp;
}

void insertAtTail(Node* &tail, int data){ 
    Node* temp = new Node(data);
    tail -> next = temp;
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
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //Memory free start node
        temp->next = NULL;
    }
    else{
        //Deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

//Print Or Traverse Linked List
void print(Node* &head){
   Node* temp = head;

   while(temp != NULL){
       cout << temp ->data << " ";
       temp = temp -> next;
   }
   cout << endl;
}

int main(){
   Node* nodeobj = new Node(10);

   //head pointed to nodeobj
   Node* head = nodeobj; //Head Insertion
   Node* tail = nodeobj; //Tail Insertion
   print(head);

//    insertAtHead(head, 12);
//    print(head);
   
//    insertAtHead(head, 15);
//    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 22);
    print(head);

    deleteNode(4,head);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}