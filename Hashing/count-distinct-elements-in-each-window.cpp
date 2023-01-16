// Naive Solution

// #include <bits/stdc++.h>
// using namespace std;

// void printDistinct(int arr[], int n, int k)
// {
//     for(int i=0;i<=n-k;i++){
//         int count=0;
//         for(int j=0;j<k;j++){
//             bool flag=false;
//             for(int p=0;p<j;p++){
//                 if(arr[i+j]==arr[i+p])
//                 {
//                     flag=true;break;
//                 }
//             }
//             if(flag==false)count++;
            
//         }
//         cout<<count<<" ";
//     }
// }

// int main()
// {
//     int arr[] = {10, 10, 5, 3, 20, 5};
   
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k=4;
//     printDistinct(arr, n, k);
// }

// Efficient Solution

#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct (int arr[], int n, int k)
    {
        vector<int> res;
        unordered_map<int, int> m;
        for (int i = 0; i < k; i++)
            m[arr[i]]++;
        res.push_back(m.size());
        for (int i = k; i < n; i++) {
            m[arr[i-k]]--;
            if (m[arr[i-k]] == 0)
                m.erase(arr[i-k]);
            m[arr[i]]++;
            res.push_back(m.size());
        }
        return res;
    }

int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    vector<int> result = countDistinct(arr, n, k);
    for (auto i : result)
        cout << i << ' ';
}