#include <bits/stdc++.h>
using namespace std;

int largestZeroSubarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
     if (arr[i] == 0)
        arr[i] = -1;
     
    unordered_map<int, int> m;
    int psum = 0, res = 0;
    
    for (int i = 0; i < n; i++) {
        psum += arr[i];
        if (psum == 0)
            res = i+1;
        if (m.find(psum) == m.end())
            m.insert({psum, i});
        else 
            res = max(res, i-m[psum]);
    }

    return res;
}



int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << largestZeroSubarray(arr, n);
}