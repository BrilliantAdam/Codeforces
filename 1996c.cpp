#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int T, n, Q, l, r;
char a[N], b[N];
int pre[N][26], pb[N][26];

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> Q;
        cin >> (a + 1); 
        cin >> (b + 1);
        
        for (int i = 1; i <= n; i++)
            for (int k = 0; k < 26; k++) 
                pre[i][k] = pre[i - 1][k] + ((a[i] - 'a') == k);
        
        for (int i = 1; i <= n; i++)
            for (int k = 0; k < 26; k++) 
                pb[i][k] = pb[i - 1][k] + ((b[i] - 'a') == k);
        
        while (Q--) {
            cin >> l >> r;
            int s1 = 0, s2 = 0;
            for (int k = 0; k < 26; k++) {
                int w = pre[r][k] - pre[l - 1][k] - (pb[r][k] - pb[l - 1][k]);
                if (w > 0) 
                    s1 += w;
                else 
                    s2 -= w;
            }
            cout << max(s1, s2) << endl;
        }
    }
}
