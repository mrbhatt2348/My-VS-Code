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

// void levelOrderTraversalLBL (Node * root) {
//     if (root == NULL)
//         return;
//     queue<Node *>q;
//     q.push (root);
//     q.push (NULL);
//     while (q.size() > 1) {
//         Node * curr = q.front();
//         q.pop();
//         if (curr == NULL) {
//             cout << '\n';
//             q.push(NULL);
//             continue;
//         }
//         cout << curr->key << ' ';
//         if (curr->left != NULL)
//             q.push (curr->left);
//         if (curr->right != NULL)
//             q.push (curr->right);
//     }
//     return;
// }

void levelOrderTraversalLBL (Node * root) {
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push (root); 
    while (q.empty() == false) {
        int c = q.size();
        for (int i = 0; i < c; i++) {
            Node * curr = q.front();
            q.pop();
            cout << curr->key << ' ';
            if (curr->left != NULL)
                q.push (curr->left);
            if (curr->right != NULL)
                q.push (curr->right);
        }
        cout << '\n';
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
    levelOrderTraversalLBL (root);
    return 0;
}