#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int p_sum = 0, res = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        p_sum = p_sum + arr[i];
        if (p_sum == sum)
            res = i+1;
        if (m.find(p_sum) == m.end())
            m.insert({p_sum, i});
        if (m.find(p_sum-sum) != m.end()) 
            res = max (res, i-m[p_sum-sum]);
    }
    return res;
}

int main()
{
    int arr[] = {8, 3, -7, -4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = -8;
    
    cout << largestSubarrayWithSumX(arr, n, sum);
    
}