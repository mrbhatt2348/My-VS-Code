#include <bits/stdc++.h>
using namespace std;

int countFrequencies(int arr[], int n)
{
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
      m[arr[i]]++;
    for (auto i : m)
        cout << i.first << ' ' << i.second << '\n';
}

int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    countFrequencies(arr, n);
    
    return 0;
}