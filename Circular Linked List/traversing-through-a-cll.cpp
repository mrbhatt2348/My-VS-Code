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

// void printList (Node * head) {
//     if (head == NULL)
//         return;
//     cout << head->data <<' ';
//     for (Node * i = head->next; i != head; i = i->next)
//         cout << i->data << ' ';
// }

void printList (Node * head) {
    if (head == NULL)
        return;
    Node * curr = head;
    do {
        cout << curr->data << ' ';
        curr = curr->next;
    } while (curr != head);
}

int main() {
    
    Node * head = new Node(100);
    head->next = new Node(200);
    head->next->next = new Node(300);
    head->next->next->next = new Node(400);
    head->next->next->next->next = new Node(500);
    head->next->next->next->next->next = head;
    printList(head);
    return 0;
}