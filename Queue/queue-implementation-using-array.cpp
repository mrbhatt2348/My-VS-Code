#include<bits/stdc++.h>
using namespace std;

struct Queue {
    int cap, size;
    int * arr;
    Queue (int x) {
        cap = x;
        size = 0;
        arr = new int (cap);
    }

    bool isFull () {
        return size == cap;
    }

    bool isEmpty () {
        return size == 0;
    }

    void enqueue (int x) {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }

    void dequeue () {
        if (isEmpty())
            return;
        for (int i = 0; i < size-1; i++)
            arr[i] = arr[i+1];
        size--;
    }

    int getFront () {
        if (isEmpty())
            return;
        return 0;
    }

    int getRear () {
        if (isEmpty())
            return;
        return size-1;
    }
};