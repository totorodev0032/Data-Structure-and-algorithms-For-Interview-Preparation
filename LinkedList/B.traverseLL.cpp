// Linked implementation
/* 

    10   ---  20 ---    30  

*/

#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printLL(Node *head) {
    Node *curr = head;
    
    while(curr!=NULL){
        cout << (curr -> data) << " ";
        curr = curr->next;
    }
}


int main() {
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    
    head -> next = temp;
    temp -> next = temp1;
    temp1 -> next = NULL;
    
    printLL(head);
    
    return 0;
}