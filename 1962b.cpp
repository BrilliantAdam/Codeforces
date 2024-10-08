#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<long long> a(n);

        for (size_t i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if (a[n - 2] == a[n - 1]) {
            cout << "SQUARE\n";
        } else {
            cout << "TRIANGLE\n";
        }
    }

    return 0;
}
