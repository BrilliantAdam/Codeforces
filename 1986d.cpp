#include <bits/stdc++.h>
using namespace std;

const int max_n = 20 + 5;
char s[max_n];
int num[max_n];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> (s + 1);
        int ans = 300;
        for (int p = 1; p <= n - 1; ++p) {
            int now = 0;
            for (int i = 1; i <= p - 1; ++i)
                num[++now] = s[i] - '0';
            num[++now] = (s[p] - '0') * 10 + s[p + 1] - '0';
            for (int i = p + 2; i <= n; ++i)
                num[++now] = s[i] - '0';
            int res = 0;
            for (int i = 1; i <= now; ++i) {
                if (!num[i]) {
                    ans = 0;
                    break;
                }
                if (num[i] > 1)
                    res += num[i];
            }
            if (ans)
                ans = min(ans, max(res, 1));
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
