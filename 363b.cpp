//=====================================================
// Author      : BrilliantAdam
// Date        : 29/6/2024
// Description : Junior Training Sheet V7.0
// Problem     : 363B
// Problem No. : 29
// Learned     : Unfinished
//=====================================================
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , k , index;
    long long sum {0}, min = INT_MAX;
    cin >> n >> k;
    // vector<int> prefix_sum(n+1, 0);
    long long prefix_sum[n];
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        prefix_sum[i] = sum;
        // prefix_sum.push_back(sum);
    }
    for(int i=k-1; i<n; i++){
        if(i>k-1)
            prefix_sum[i] -= prefix_sum[i-k];

        if(prefix_sum[i] < min){
            min = prefix_sum[i];
            index = i - k;
        }
    }    
    cout << index;
    return 0;
}
