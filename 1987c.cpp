//=====================================================
// Author      : BrilliantAdam
// Date        : 1/7/2024
// Description : 1987 Div 1 + 2 contest
// Problem     : 1987C
// Problem No. : 3
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n;
        vector<int>heights(n+1,0) , dp(n+1, 0);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }
        int seconds = 0;
        for(int i=n-1; i>=0; i--){
            dp[i] = max(dp[i+1]+1, heights[i]);
        }
        cout << dp[0] << endl;
    }

    return 0;
}
