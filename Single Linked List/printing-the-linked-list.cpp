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
    while (head != NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
}

int main() {
    Node * head = new Node(100);
    head->next = new Node(200);
    head->next->next = new Node(300);
    head->next->next->next = new Node(400);
    printList(head);
    printList(head); // Will print the linked list again because when a pointer is passed to the function, likewise the variables, a duplicate is formed, so the head in the main will not be changed
    return 0;
}