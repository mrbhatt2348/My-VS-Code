#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node * left;
    Node * right;
    Node (int x) {
        key = x;
        left = right = NULL;
    }
};

void printNodeatK (Node * root, int key) {
    if (root == NULL)
        return;
    if (key == 0) 
        cout << root->key << ' ';
    else {
        printNodeatK (root->left, key-1);
        printNodeatK (root->right, key-1);
    }
}

int main () {
    Node * root = new Node (10);
    root->left = new Node (20);
    root->right = new Node (30);
    root->left->left = new Node (40);
    root->left->right = new Node (50);
    root->right->right = new Node (70);
    root->right->right->right = new Node (80);
    printNodeatK (root, 2);
    return 0;
}