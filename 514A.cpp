//brilliantadam
//15/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    for(int i=0; i< s.length(); i++){
        if(int(s[i]) - 48 >= 5 && !(i==0 && s[i] == '9')){
            s[i] = 9 - (int(s[i]) - 48) + 48;
        }
    }
    cout << s;
    return 0;
}
