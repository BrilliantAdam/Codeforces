#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long e = 0, o = 0;
        int cnte = 0, cnto = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i % 2 == 0) {
                e += x;
                cnte++;
            } else {
                o += x;
                cnto++;
            }
        }
        if (e % cnte == 0 && o % cnto == 0 && (e / cnte) == (o / cnto))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
