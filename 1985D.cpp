//brilliantadam
//11/6/2024
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int minX = n, maxX = 0, minY = m, maxY = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if (c == '#') {
                    minX = min(minX, i + 1);
                    maxX = max(maxX, i + 1);
                    minY = min(minY, j + 1);
                    maxY = max(maxY, j + 1);
                }
            }
        }
        cout << (minX + maxX) / 2 << " " << (minY + maxY) / 2 << endl;
    }
    return 0;
}
