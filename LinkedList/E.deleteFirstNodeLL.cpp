// Delete first node of a linked list

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

Node *deleteFirstNode(Node *head){
    if(head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
        
    }
}

void traverseLL(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout << curr->data << " " << curr->next<<endl;
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
    cout<<endl;
    head = deleteFirstNode(head);
    traverseLL(head);
    
    return 0;
}