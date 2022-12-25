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

Node * deleteKthNode (Node * head, int k) {
    if (head == NULL)
        return head;
    Node * curr = head;
    if (k == 1) {
        while (curr->next != head)
            curr = curr->next;
        curr->next = head->next;
        delete head;
        return curr->next;
    }
    for (int i = 0; i < k-2; i++) 
        curr = curr->next;
    Node * temp = curr->next;
    curr->next = curr->next->next;
    delete temp; // Dont use delete curr->next here, first store the reference of curr->next and then delete.
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
    head = deleteKthNode(head, 2);
    printList(head);
    return 0;
}