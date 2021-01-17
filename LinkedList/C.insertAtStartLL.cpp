// insert node at beginning

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *insertAtStart(Node *head, int x) {
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

// Function for traversing the linked 
void traverseLL(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout << curr->data<<" ";
        curr = curr->next;
    }
}

int main() {
    Node *head = new Node(2);
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    
    
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;
    
    traverseLL(head);
    head = insertAtStart(head, 12);
    cout<<endl;
    traverseLL(head);
    

    
    
    
    return 0;
}