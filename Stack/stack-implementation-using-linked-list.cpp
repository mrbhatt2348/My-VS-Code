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

struct myStack {
    Node * head;
    int size;

    myStack (int x) {
        head = NULL;
        size = 0;
    }

    void push (int x) {
        Node * temp = new Node (x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop () {
        if (head == NULL)
            return INT_MAX;
        int del = head->data;
        Node * temp = head;
        head = head->next;
        delete temp;
        size--;
        return del;
    }

    int size () {
        return size;
    }

    bool isEmpty () {
        return head == NULL;
    }

    int peek () {
        if (head == NULL)
            return INT_MAX;
        return head->data;
    }
};