#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;

    long long x;
    cin >> t;
    while(t--){
        bool borrow = false , flag = true;
        cin >> x;
        x /= 2;
        string s = to_string(x);
        for(int i=0; i <s.length(); ++i){
            if(int(s[i]) - '0' > 5){
                borrow = true;
            }
            else{
                if(borrow == false && int(s[i]) - '0' != 5){
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
                else{
                    s[i] = max(5 - (s[i] -'0') , (s[i] -'0') + 1);
                    (s[i] - '0' > 5)? borrow = true : borrow = false;
                }
            }
        }
        if(flag)
            cout << "YES" << endl;
        
    }
    return 0;
}
