//brilliantadam
//19/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, R , L;
    string s;
    cin >> n >> s;
    R = count(s.begin(), s.end(), 'R');
    L = count(s.begin(), s.end(), 'L');
    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            cout << i + 1 << " " ;
            if(L > 0){
                cout << R + i;
            }
            else{
                cout << R + i + 1;
            }
            return 0;
        }
        else if(s[i] =='L'){
            cout << L + i << " " << i;
            return 0;
        }
    }
 
    return 0;
}
