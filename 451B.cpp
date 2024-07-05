//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-05 15:03:47
// Description : Junior Training Sheet V7.0
// Problem Code: https://codeforces.com/contest/451/problem/B
// Problem Name: B_Sort_the_Array
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t, count {0} , x[2];
    cin >> t;
    int a[t] , s[t];
    for(int i=0; i<t; i++){
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s, s+t);
    for(int i=0; i<t; i++){
        if(count > 2){
            cout << count << " no";
            return 0;
        }
        else{
            if(a[i] != s[i]){
                x[count] = i+1;
                count++;
            if(count > 2){
                cout << count << " no";
                return 0;
                 }
            }
        }
    }
    (count == 0)? cout << "yes\n1 1": cout <<"yes\n"<< x[0] <<" " << x[1];

    return 0;
}
