#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (k > 9) {
            cout << 0 << "\n";
            continue;
        }
        
        int cnt = 0;
        for (int i = 0; i < 10; ++i) {
            if (i * k < 10) cnt++;
        }
        
        long long x = 1, y = 1;
        int b = m - n;
        long long cnt_pow = cnt;
        
        while (b) {
            if (b % 2 == 1) x = (x * cnt_pow) % MOD;
            cnt_pow = (cnt_pow * cnt_pow) % MOD;
            b /= 2;
        }
        x = (x - 1 + MOD) % MOD;

        cnt_pow = cnt;
        b = n;
        while (b) {
            if (b % 2 == 1) y = (y * cnt_pow) % MOD;
            cnt_pow = (cnt_pow * cnt_pow) % MOD;
            b /= 2;
        }

        cout << (x * y % MOD + MOD) % MOD << "\n";
    }

    return 0;
}
