//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-11 08:26:18
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: B_Balanced_Array
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;

    cin >> t;
    int x;
    while(t--){
        long long sumEven {0} , sumOdd {0};
        cin >> x;
        if((x/2) % 2 == 0){
            cout << "YES\n";
            for(int i=2; i<=x ; i+=2){
                cout << i << " ";
                sumEven += i;
            }
            for(int i=1; i<=x-2; i+=2){
                cout << i << " ";
                sumOdd += i;
            }
            cout << sumEven - sumOdd;
        }
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
