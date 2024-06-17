#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , x;
    cin >> n;
    int frq[1001] {0};
    for(int i=0; i<n; i++){
        cin >> x;
        frq[x]++;
    }
    sort(frq, frq+1001, greater<int>());
    if(frq[0] <= ceil(n/2.0))
        cout << "YES ";
    else
        cout << "NO";
    return 0;
}
