#include <bits/stdc++.h>
using namespace std;
const int N = 200005;

int main() {
    int T, a[N], b[N], n;
    cin >> T;
    while (T--) {
        cin >> n;
        int A = 0, B = 0, C = 0, D = 0;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];
        
        for (int i = 1; i <= n; ++i) {
            if (a[i] > b[i]) A += a[i];
            else if (a[i] < b[i]) B += b[i];
            else {
                if (a[i] == -1) C++;
                if (a[i] == 1) D++;
            }
        }
        
        while (C) {
            if (A > B) A--;
            else B--;
            C--;
        }
        
        while (D) {
            if (A > B) B++;
            else A++;
            D--;
        }
        
        cout << min(A, B) << endl;
    }
    return 0;
}
