#include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    int sum = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        if ((s.find(sum) != s.end()) || sum == 0)
            return true;
        s.insert(sum);
    }
    return false;
    
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << ZeroSumSubarray(arr, n);
}