#include <bits/stdc++.h>
using namespace std;

int main() {
    int numCases;
    cin >> numCases;
    while (numCases--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = n; i > m; i--) {
            cout << i << ' ';
        }
        for (int i = 1; i <= m; i++) {
            cout << i << ' ';
        }
        cout << endl;
    }
}
