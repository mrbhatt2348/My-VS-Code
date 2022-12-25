#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node * prev;
    Node * next;
    Node (int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printList(Node * head) {
    while (head != NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
    return;
}

Node * deleteLastNode (Node * head) {
    if (head == NULL)
        return NULL;
    if (head->next == NULL){
        delete head;
        return NULL;
    Node * temp = head; 
    while (temp->next != NULL) 
        temp = temp->next;
    temp->prev->next = NULL;
    delete temp;
    return head;
    }
}

int main() {
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = deleteLastNode(head);
    printList(head);
}