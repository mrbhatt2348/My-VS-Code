// Naive Solution

// #include <bits/stdc++.h>
// using namespace std;

// bool isSum(int arr[], int n, int sum)
// {
//     for(int i=0;i<n;i++){
//         int curr_sum=0;
//         for(int j=i;j<n;j++){
//            curr_sum+=arr[j];
//            if(curr_sum==sum)
//                 return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {5, 8, 6, 13, 3, -1};
//     int sum=22;
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     cout << isSum(arr, n, sum);
// }

// Efficient Code

// #include <bits/stdc++.h>
// using namespace std;

// bool isSum(int arr[], int n, int sum)
// {
//     unordered_set<int> s;
//     int pre_sum = 0;
//     for(int i = 0; i < n; i++)
//     {   
//         if(pre_sum==sum)
//             return true;
//         pre_sum += arr[i];
//         if(s.find(pre_sum-sum) != s.end())
//           return true;
//         s.insert(pre_sum);
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {5, 8, 6, 13, 3, -1};
//     int sum=22;
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     cout << isSum(arr, n, sum);
// }

// count the subarrays with given sum

// class Solution {
// public:
//     int subarraySum(vector<int>& arr, int k) {
//         unordered_map<int, int> m;
//         int n = arr.size(), psum = 0, c = 0;
//         for (auto i : arr) {
//             psum += i;
//             if (psum == k)
//                 c++;
//             if (m.find(psum-k) != m.end())
//                 c += m[psum-k];
//             m[psum]++;
//         }
//         return c;
//     }
// };