#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , t , l;
    cin >> n >> t;
    l = to_string(t).length();
    if(l > n){
        cout << -1;
    }
    else if (l == n){
        cout << t;
    }
    else{
        l = n - l;
        cout << t;
        while(l){
            cout << 0;
            l--;
        }
    }

    return 0;
}
