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

Node * insertNodeAtPos (Node * head, int pos, int data) {
    Node * temp = new Node(data);
    if (pos == 1) {
        temp->next = head;
        return temp;
    }
    Node * curr = head;
    for (int i = 1; i <= pos-2 && curr != NULL; i++) 
        curr = curr->next;
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return temp;
}

int main() {
    Node * head = NULL;
    head = insertNodeAtPos(head, 1, 100);
    head = insertNodeAtPos(head, 1, 200);
    head = insertNodeAtPos(head, 1, 300);
    head = insertNodeAtPos(head, 1, 400);
    printList(head);
    return 0;
}