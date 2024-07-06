//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-05 15:03:47
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: B_Sort_the_Array
// Learned     :
//=====================================================
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t, count{0}, x[2] = {-1, -1};
    bool flag1 = false, flag2 = false;
    cin >> t;
    int a[t], s[t];
    for (int i = 0; i < t; ++i){
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s, s+t);
    for(int i=0; i<t; ++i){
        if(a[i] != s[i]){
            if(x[0] == -1)
                x[0] = i;
            x[1] = i;
        }
    }
    reverse(a+x[0],a+x[1]+1);
    for(int i=0; i<t; ++i){
        if(a[i] != s[i]){
            cout << "no" ;
            return 0;
        }
    }
    if(x[0] == -1){
        x[0] =0;
        x[1] =0;
    }
    cout << "yes\n" << x[0]+1 << " " << x[1]+1;
    return 0;
}
