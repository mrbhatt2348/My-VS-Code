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

// Node * insertBegin (Node * head, int data) {
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
//     return temp;
// }

// There is also an efficient implementation where we insert the temp node after the head node and then we swap the values of head node and the temp node;
Node * insertBegin(Node * head, int data) {
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
    return head;
}


int main() {
    
    Node * head = NULL;
    head = insertBegin (head, 100);
    head = insertBegin (head, 200);
    head = insertBegin (head, 300);
    head = insertBegin (head, 400);
    head = insertBegin (head, 500);
    printList(head);
    return 0;
}