// insert at the end of the linked list 

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

Node *insertAtEnd(Node *head, int data) {
    Node *temp = new Node(data);
    
    if(head == NULL) 
        return temp;
        
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
        
    curr->next = temp;
    temp->next = NULL;
    
    return head;
}

void traverseLL(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout << curr->data << " " << curr->next << endl;
        curr = curr->next;
    }
}


int main() {
    Node *head = new Node(20);
    Node *node_1 = new Node(30);
    Node *node_2 = new Node(40);
    
    head->next = node_1;
    node_1->next = node_2;
    node_2->next = NULL;
    
    traverseLL(head);
    insertAtEnd(head, 100);
    traverseLL(head);
    
    return 0;
}