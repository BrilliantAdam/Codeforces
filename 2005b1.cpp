#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int maxNumber, rangeCount, queryCount;
        cin >> maxNumber >> rangeCount >> queryCount;

        vector<int> boundaries(rangeCount + 1);
        for(int i = 1; i <= rangeCount; i++) {
            cin >> boundaries[i];
        }

        if(boundaries[1] > boundaries[2]) {
            swap(boundaries[1], boundaries[2]);
        }

        for(int i = 1; i <= queryCount; i++) {
            int query;
            cin >> query;

            if(query > boundaries[2]) {
                cout << maxNumber - boundaries[2] << endl;
            } else if(query < boundaries[1]) {
                cout << boundaries[1] - 1 << endl;
            } else {
                cout << (boundaries[2] - boundaries[1]) / 2 << endl;
            }
        }
    }
    return 0;
}
