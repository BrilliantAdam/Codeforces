//brilliantadam
//28/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t , a =-1 , c {0};
    cin >> t;
    string s1 , s2;
    cin >> s1;
    s2 = s1;
    (t%2 == 0)? a =1 : a =-1;
    for(int i=t; i>=0; i--){
        if(a == 1){
            s2[ceil(i/2.0)-1] = s1[c];
            a = -1;
        }
        else{
            s2[t -ceil(i/2.0)] = s1[c]; 
            a =1;
        }
        c++;
    }
    cout << s2;
    return 0;
}
