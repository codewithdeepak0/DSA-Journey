#include<iostream>
#include<map>
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

 void print(Node* &head){
    Node* temp = head;
 
    while(temp != NULL){
        cout << temp ->data << " ";
        temp = temp -> next;
    }
    cout << endl;
 }

 void insertAtHead(Node* &head, int data){
    //New node create
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*,bool> visited;
    Node* temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main(){
    Node* nodeobj = new Node(10);

    Node* head = nodeobj;
    Node* tail = nodeobj;
 
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 17);
    // print(head);

    tail->next = head->next;

    if(detectLoop(head)){
        cout << "Cycle detect" << endl;
        print(head);
    }else{
        cout << "Cycle not detect" << endl;
        print(head);
    }

}