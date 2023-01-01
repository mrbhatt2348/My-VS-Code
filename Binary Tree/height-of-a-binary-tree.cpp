// TC: O(n) SC: O(h), h = height of the binary tree
// In the worst case, the function will have h+1 calls in the call stack
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

int height (Node * root) {
    if (root == NULL)
        return 0;
    return max (height(root->left), height(root->right)) + 1;
}

int main () {
    Node * root = new Node (10);
    root->left = new Node (20);
    root->right = new Node (30);
    root->right->left = new Node (40);
    root->right->right = new Node (50);
    cout << height (root);
    return 0;
}