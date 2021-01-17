// Linked implementation
/* 

    10     20    30  

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


int main() {
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    
    head -> next = temp;
    temp -> next = temp1;
    temp1 -> next = NULL;
    
    cout << head->data<<" "<< temp->data << " "<<temp1->data;
    
    return 0;
}