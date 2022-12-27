#include<bits/stdc++.h>
using namespace std;

struct Queue {
    int cap, size, front;
    int * arr;
    Queue (int x) {
        cap = x;
        arr = new int (cap);
        size = 0, front = 0;
    }

    bool isFull () {
        return size == cap;
    }

    bool isEmpty () {
        return size == 0;
    }

    int getFront () {
        if (isEmpty()) 
            return;
        return front;
    }

    int getRear () {
        if (isEmpty()) 
            return;
        return (front + size - 1) % cap;
    }

    void enqueue (int x) {
        if (isFull()) 
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    void dequeue () {
        if (isEmpty()) 
            return;
        int front = getFront();
        front = (front + 1) % cap;
        size--;
    }
};