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

Node * insertBegin(Node * head, int x){
    Node * temp = new Node (x);
    temp->next = head;
    return temp;
}

int main() {
    Node * head = NULL;
    head = insertBegin(head, 100);
    head = insertBegin(head, 200);
    head = insertBegin(head, 300);
    head = insertBegin(head, 400);
    printList(head);
    return 0;
}