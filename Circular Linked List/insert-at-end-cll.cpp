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
    Node * curr = head;
    do {
        cout << curr->data << ' ';
        curr = curr->next;
    } while (curr != head);
}

// Node * insertEnd (Node * head, int data) {
//     Node * temp = new Node(data);
//     if (head == NULL) {
//         temp->next = temp;
//         return temp;
//     }
//     Node * curr = head;
//     while (curr->next != head)
//         curr = curr->next;
//     curr->next = temp;
//     temp->next = head;
//     return head;
// }

// We can also insert new node at the end in the constant time, first we have to insert new node next to the head, and then swap head and temp and then return temp as the new head.
Node * insertEnd (Node * head, int data) {
    Node * temp = new Node(data);
    if (head == NULL) {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int extra = head->data;
    head->data = temp->data;
    temp->data = extra;
    return temp;
}


int main() {
    
    Node * head = NULL;
    head = insertEnd (head, 100);
    head = insertEnd (head, 200);
    head = insertEnd (head, 300);
    head = insertEnd (head, 400);
    head = insertEnd (head, 500);
    printList(head);
    return 0;
}