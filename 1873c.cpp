#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    int T; 
    cin >> T;

    while (T--) {
        int sum = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                char c; 
                cin >> c;
                if (c != '.') {
                    int row_dist = min(i + 1, 10 - i);
                    int col_dist = min(j + 1, 10 - j);
                    sum += min(row_dist, col_dist);
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
