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

int maxlevel = 0;

void leftView (Node * root, int level) {
    if (root == NULL )
        return;
    if (maxlevel < level) {
        cout << root->key << ' ';            
        maxlevel = level;
    }
    leftView (root->left, level+1);
    leftView (root->right, level+1);
}

void printLeftView (Node * root) {
    leftView (root, 1);
}

// void printLeftView (Node * root) {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     q.push (root); 
//     while (q.empty() == false) {
//         int c = q.size();
//         for (int i = 0; i < c; i++) {
//             Node * curr = q.front();
//             q.pop();
//             if (i == 0)
//                 cout << curr->key << ' ';
//             if (curr->left != NULL)
//                 q.push (curr->left);
//             if (curr->right != NULL)
//                 q.push (curr->right);
//         }
//     }
// }

int main () {
    Node * root = new Node (10);
    root->left = new Node (20);
    root->right = new Node (30);
    root->left->left = new Node (40);
    root->left->right = new Node (50);
    root->right->right = new Node (70);
    root->right->right->right = new Node (80);
    printLeftView (root);
    return 0;
}