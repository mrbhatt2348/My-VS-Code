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
    cout << '\n';
}

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

// Node * deleteHead (Node * head) {
//     if (head == NULL)
//         return NULL;
//     if (head->next == head) {
//         delete head;
//         return NULL;
//     }
//     Node * curr = head;
//     while (curr->next != head)
//         curr = curr->next;
//     curr->next = head->next;
//     delete head;
//     return curr->next;
// }

// The optimized way is to copy the data of the second element to the head and then delete the second element...
Node * deleteHead (Node * head) {
    if (head == NULL)
        return NULL;
    if (head->next == head) {
        delete head;
        return NULL;
    }
    Node * temp = head->next;
    head->data = temp->data;
    head->next = temp->next;
    delete temp;
    return head;
}


int main() {
    
    Node * head = NULL;
    head = insertEnd (head, 100);
    head = insertEnd (head, 200);
    head = insertEnd (head, 300);
    head = insertEnd (head, 400);
    head = insertEnd (head, 500);
    printList(head);
    head = deleteHead(head);
    printList(head);
    return 0;
}