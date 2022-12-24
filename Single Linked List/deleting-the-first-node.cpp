#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node * next;
  Node (int x) {
      data = x;
      next = NULL;
  }
};

void printList (Node * head) {
    if (head == NULL)
        return;
    cout << head->data << ' ';
    printList(head->next);
}

Node * insertEnd(Node * head, int x){
   Node * temp = new Node (x);
   if (head == NULL)
       return temp;
    Node * curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head; 
}

Node * deleteFirstNode (Node * head) {
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node * temp = head->next; // Store head in temp
    delete head; // delete head
    return temp; // return temp
}

int main() {
    Node * head = NULL;
    head = insertEnd(head, 100);
    head = insertEnd(head, 200);
    head = insertEnd(head, 300);
    head = insertEnd(head, 400);
    head = deleteFirstNode(head);
    // head = deleteFirstNode(head);
    // head = deleteFirstNode(head);
    // head = deleteFirstNode(head);
    printList(head);
    return 0;
}