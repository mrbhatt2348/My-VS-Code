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

int main() {
    
    Node * head = new Node(100);
    head->next = new Node(200);
    head->next->next = new Node(300);
    head->next->next->next = new Node(400);
    head->next->next->next->next = new Node(500);
    head->next->next->next->next->next = head;
    
    cout << head->data << " --> " << head->next->data << " --> " << head->next->next->data << " --> " << head->next->next->next->data << " --> " << head->next->next->next->next->data; 
    return 0;
}