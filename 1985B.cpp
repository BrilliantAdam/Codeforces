//brilliantadam
//11/6/2024
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_sum = 0, max_x = 0;
        for (int x = 2; x <= n; x++) {
            int sum = 0, k = 1;
            while (k * x <= n) {
                sum += k * x;
                k++;
            }
            if (sum > max_sum) {
                max_sum = sum;
                max_x = x;
            }
        }
        cout << max_x << endl;
    }
    return 0;
}
