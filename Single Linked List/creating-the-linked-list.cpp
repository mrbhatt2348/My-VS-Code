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
    cout << head->data << " --> " << head->next->data; 
    return 0;
}