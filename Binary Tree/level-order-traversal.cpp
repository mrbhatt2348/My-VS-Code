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

// int height (Node * root) {
//     if (root == NULL)
//         return 0;
//     return max (height(root->left), height(root->right)) + 1;
// }


// void printNodeatK (Node * root, int k) {
//     if (root == NULL)
//         return;
//     if (k == 0) 
//         cout << root->k << ' ';
//     else {
//         printNodeatK (root->left, k-1);
//         printNodeatK (root->right, k-1);
//     }
// }

// void levelOrderTraversal (Node * root) {
//     if (root == NULL)
//         return;
//     int h = height (root), i = 0;
//     while (i <= h) {
//         printNodeatK (root, i);
//         i++;
//     }
// }

void levelOrderTraversal (Node * root) {
    if (root == NULL)
        return;
    queue<Node *>q;
    q.push (root);
    while (q.empty() == false) {
        Node * curr = q.front();
        q.pop();
        cout << curr->key << ' ';
        if (curr->left != NULL)
            q.push (curr->left);
        if (curr->right != NULL)
            q.push (curr->right);
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
    levelOrderTraversal (root);
    return 0;
}