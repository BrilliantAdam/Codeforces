//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-16 08:35:13
// Description : Junior Training Sheet V7.0
// Problem Code: 148B
// Problem Name: B_Escape
// Learned     : Naming of variables should be clear next time
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int count = 0;
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    if (vp >= vd) {
        cout << 0;
        return 0;
    }
    double pd = vp * t;
    while (pd < c) {
        double time_to_overtake = pd / (vd - vp);
        pd += time_to_overtake * vp;
        if (pd >= c) 
            break;
        count++;
        pd += (time_to_overtake + f) * vp;
    }
    cout << count;
    return 0;
}
