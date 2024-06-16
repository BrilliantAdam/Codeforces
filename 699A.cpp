//brilliantadam
//16/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , x, R = {0}, diff= INT_MAX;
    bool flagR {0}, flagL{0}, chR {0};
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        cin >> x;
        if(s[i] == 'R'){
            R = x;
            flagR = 1;
            chR = 1;
        }
            
        else if(s[i] == 'L' && chR == 1 && diff > (x-R))
        {
            diff = x - R;
            flagL = 1;
            chR =0;
        }
            
    }
    if(diff > 0 && flagR == 1 && flagL == 1) 
        cout << diff / 2;
    else
        cout << -1;
    return 0;
}
