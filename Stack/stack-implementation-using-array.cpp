#include<bits/stdc++.h>
using namespace std;

// struct myStack
// {
//     int * arr;
//     int cap;
//     int top;

//     myStack (int c) {
//         cap = c;
//         arr = new int (cap);
//         top = -1;
//     }

//     void push (int x) {
//         if (top == cap-1) {
//             cout << INT32_MAX;
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }

//     int pop () {
//         if (top == -1) {
//             cout << INT32_MIN;
//             return 0;
//         }
//         int deleted = arr[top];
//         top--;
//         return deleted;
//     }

//     int peek (int x) {
//         if (top == -1) {
//             cout << INT32_MAX;
//             return 0;
//         }
//         return arr[x];
//     }

//     int size() {
//         return top+1;
//     }

//     bool isEmpty() {
//         return (top == -1);
//     }
    
// };

// int main() {
//     myStack s(5);
//     s.push(100);
//     s.push(200);
//     s.push(300);
//     s.push(400);
//     s.push(500);
//     cout << s.pop() << '\n';
//     cout << s.peek(4) << '\n';
//     cout << s.size() << '\n';
//     cout << s.isEmpty() << '\n';
//     return 0;
// }


// Vector Implementation
struct myStack {
    vector<int> v;

    void push(int x) {
        v.push_back(x);
    }

    int pop() {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        return v.empty();
    }
};

int main() {
    myStack s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    cout << s.pop() << '\n';
    cout << s.peek() << '\n';
    cout << s.size() << '\n';
    cout << s.isEmpty() << '\n';
    return 0;
}