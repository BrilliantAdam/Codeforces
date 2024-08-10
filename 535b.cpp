//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-08-10 02:47:53
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: B_Tavas_and_SaDDas
// Learned     : Represting Lucky Numbers as binary '4' to 0 and '7' to 1
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string k;
    long long index =0;
    cin >> k;
    for(int i=1; i<k.length(); ++i){
        index += pow(2,i);
    }
    for(int i=0; i<k.length(); ++i){
        if(k[i] == '7') index += pow(2,i);
    }
    cout << ++index;
    return 0;
}
