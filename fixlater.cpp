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
//##################################
//##################################
//##################################
//##################################
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, tmp;
    long long x;
    cin >> t;
    while(t--){
        bool flag = true;
        cin >> x;
        vector<int> a;
        while(x){
            a.push_back(x%10);
            x /= 10;
        }
        reverse(a.begin(), a.end());
        if(a[0] == 1 && a[a.size()-1] != 9){
            tmp = 10 + a[1];
            if(tmp%2 == 0){
                if(tmp/2 -1 < 5){
                    flag = false;
                    break;
                }
            }
            for(int i=2;i<a.size()-1; ++i){
                tmp = 10 + a[i];
                if(tmp%2 == 0){
                    if(tmp/2 -1 < 5){
                        flag = false;
                        break;
                    }
                 }
            }
        }
        else
            flag = false;
        (flag == true)? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
