#include <bits/stdc++.h> 
using namespace std; 


int longestCommonSum(bool arr1[], bool arr2[], int n) 
{ 
	int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr1[i] - arr2[i];
    
    unordered_map<int, int> m;
    int psum = 0, res = 0;
    
    for (int i = 0; i < n; i++) {
        psum += temp[i];
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
	bool arr1[] = {0, 1, 0, 1, 1, 1, 1}; 
	bool arr2[] = {1, 1, 1, 1, 1, 0, 1}; 
	int n = sizeof(arr1)/sizeof(arr1[0]); 
	cout << longestCommonSum(arr1, arr2, n); 
	return 0; 
} 
