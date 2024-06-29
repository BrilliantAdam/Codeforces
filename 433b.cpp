//=====================================================
// Author      : BrilliantAdam
// Date        : 29/6/2024
// Description : Junior Training Sheet V7.0
// Problem     : 433B
// Problem No. : 28
// Learned     : Prefix Sums
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, l, r, type;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Compute prefix sums for original array
    vector<long long> prefix_sum(n + 1, 0);
    vector<int> arr_copy = a;
    vector<long long> sorted_prefix_sum(n + 1, 0);
    sort(arr_copy.begin(), arr_copy.end());
    for(int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
        sorted_prefix_sum[i + 1] = sorted_prefix_sum[i] + arr_copy[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> type >> l >> r;
        long long s = 0;
        if (type == 1) {
            s = prefix_sum[r] - prefix_sum[l - 1];
        } else {
            s = sorted_prefix_sum[r] - sorted_prefix_sum[l - 1];
        }
        cout << s << endl;
    }

    return 0;
}
