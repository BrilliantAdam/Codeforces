#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n ;
        long long dif {0} , mx {0} , s{0};
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=1; i<n; i++){
            dif = max(a[i-1] - a[i], 0);
            mx = max(dif, mx);
            s += dif;
            a[i] += dif;
        }
        cout <<  s + mx << endl;
    }
    return 0;
}
